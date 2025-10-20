#include <iostream>
using namespace std;

// Helper function to add two matrices
void addMatrix(int **A, int **B, int **C, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
}

// Helper function to subtract two matrices
void subtractMatrix(int **A, int **B, int **C, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];
}

// Recursive divide and conquer multiplication
void multiplyMatrix(int **A, int **B, int **C, int n) {
    if (n == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return;
    }

    int newSize = n / 2;

    // Allocate submatrices
    int **a = new int*[newSize]; int **b = new int*[newSize];
    int **c = new int*[newSize]; int **d = new int*[newSize];
    int **e = new int*[newSize]; int **f = new int*[newSize];
    int **g = new int*[newSize]; int **h = new int*[newSize];

    int **r = new int*[newSize]; int **s = new int*[newSize];
    int **t = new int*[newSize]; int **u = new int*[newSize];
    int **temp1 = new int*[newSize]; int **temp2 = new int*[newSize];

    for (int i = 0; i < newSize; i++) {
        a[i] = new int[newSize]; b[i] = new int[newSize];
        c[i] = new int[newSize]; d[i] = new int[newSize];
        e[i] = new int[newSize]; f[i] = new int[newSize];
        g[i] = new int[newSize]; h[i] = new int[newSize];
        r[i] = new int[newSize]; s[i] = new int[newSize];
        t[i] = new int[newSize]; u[i] = new int[newSize];
        temp1[i] = new int[newSize]; temp2[i] = new int[newSize];
    }

    // Split A and B into submatrices
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            a[i][j] = A[i][j];
            b[i][j] = A[i][j + newSize];
            c[i][j] = A[i + newSize][j];
            d[i][j] = A[i + newSize][j + newSize];

            e[i][j] = B[i][j];
            f[i][j] = B[i][j + newSize];
            g[i][j] = B[i + newSize][j];
            h[i][j] = B[i + newSize][j + newSize];
        }
    }

    // r = a*e + b*g
    multiplyMatrix(a, e, temp1, newSize);
    multiplyMatrix(b, g, temp2, newSize);
    addMatrix(temp1, temp2, r, newSize);

    // s = a*f + b*h
    multiplyMatrix(a, f, temp1, newSize);
    multiplyMatrix(b, h, temp2, newSize);
    addMatrix(temp1, temp2, s, newSize);

    // t = c*e + d*g
    multiplyMatrix(c, e, temp1, newSize);
    multiplyMatrix(d, g, temp2, newSize);
    addMatrix(temp1, temp2, t, newSize);

    // u = c*f + d*h
    multiplyMatrix(c, f, temp1, newSize);
    multiplyMatrix(d, h, temp2, newSize);
    addMatrix(temp1, temp2, u, newSize);

    // Combine results into C
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            C[i][j] = r[i][j];
            C[i][j + newSize] = s[i][j];
            C[i + newSize][j] = t[i][j];
            C[i + newSize][j + newSize] = u[i][j];
        }
    }

    // Free allocated memory
    for (int i = 0; i < newSize; i++) {
        delete[] a[i]; delete[] b[i]; delete[] c[i]; delete[] d[i];
        delete[] e[i]; delete[] f[i]; delete[] g[i]; delete[] h[i];
        delete[] r[i]; delete[] s[i]; delete[] t[i]; delete[] u[i];
        delete[] temp1[i]; delete[] temp2[i];
    }

    delete[] a; delete[] b; delete[] c; delete[] d;
    delete[] e; delete[] f; delete[] g; delete[] h;
    delete[] r; delete[] s; delete[] t; delete[] u;
    delete[] temp1; delete[] temp2;
}

// Utility function to print a matrix
void printMatrix(int **M, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n = 4; // Must be power of 2 for simplicity

    // Allocate matrices
    int **A = new int*[n];
    int **B = new int*[n];
    int **C = new int*[n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[n];
        B[i] = new int[n];
        C[i] = new int[n];
    }

    // Fill A and B with example values
    int count = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            A[i][j] = count;
            B[i][j] = count + 1;
            count++;
        }

    multiplyMatrix(A, B, C, n);

    cout << "Matrix A:\n"; printMatrix(A, n);
    cout << "Matrix B:\n"; printMatrix(B, n);
    cout << "Matrix C = A x B:\n"; printMatrix(C, n);

    return 0;
}
