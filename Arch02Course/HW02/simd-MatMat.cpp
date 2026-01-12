#include <immintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define SIZE 128
//#define SIZE 256
#define SIZE 512

float A[SIZE][SIZE] __attribute__((aligned(16)));
float B[SIZE][SIZE] __attribute__((aligned(16)));
float C[SIZE][SIZE] __attribute__((aligned(16)));

double seconds() {
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC, &t);
    return t.tv_sec + t.tv_nsec * 1e-9;
}

void init() {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            A[i][j] = rand() % 2;
            B[i][j] = rand() % 2;
            C[i][j] = 0;
        }
}

float matmat(int n) {
    for (int i = 0; i < n; i++)
        for (int k = 0; k < n; k++)
            for (int j = 0; j < n; j++)
                C[i][j] += A[i][k] * B[k][j];
    return C[0][0];
}

float matmul_sse(int n) {
    for (int i = 0; i < n; i++)
        for (int k = 0; k < n; k++) {
            __m128 a = _mm_set1_ps(A[i][k]);
            for (int j = 0; j < n; j += 4) {
                __m128 b = _mm_load_ps(&B[k][j]);
                __m128 c = _mm_load_ps(&C[i][j]);
                c = _mm_add_ps(c, _mm_mul_ps(a, b));
                _mm_store_ps(&C[i][j], c);
            }
        }
    return C[0][0];
}

int main() {

	printf("Input size = %d\n",SIZE);
    float r;
    double before, after;

    init();

    before = seconds();
    r = matmat(SIZE);
    after = seconds();
    printf("Result:%f Time:%f\n", r, after - before);

    init();

    before = seconds();
    r = matmul_sse(SIZE);
    after = seconds();
    printf("Result:%f Time:%f\n", r, after - before);

    return 0;
}
