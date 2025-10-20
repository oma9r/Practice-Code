#include <iostream>
using namespace std;



int main()
{
	 const int SIZE = 8;

    int A[SIZE][SIZE] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {2, 3, 4, 5, 6, 7, 8, 9},
        {3, 4, 5, 6, 7, 8, 9, 10},
        {4, 5, 6, 7, 8, 9, 10, 11},
        {5, 6, 7, 8, 9, 10, 11, 12},
        {6, 7, 8, 9, 10, 11, 12, 13},
        {7, 8, 9, 10, 11, 12, 13, 14},
        {8, 9, 10, 11, 12, 13, 14, 15}
    };

    int B[SIZE][SIZE] = {
        {1, 0, 2, 0, 3, 0, 4, 0},
        {0, 1, 0, 2, 0, 3, 0, 4},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3, 3, 3, 3},
        {4, 4, 4, 4, 4, 4, 4, 4},
        {5, 5, 5, 5, 5, 5, 5, 5},
        {6, 6, 6, 6, 6, 6, 6, 6}
    };

    int C[SIZE][SIZE] = {0}; // to store result of A * B



	for(int i=0; i < SIZE; i++)
	{
		for(int j=0; j < SIZE; j++)
		{
			C[j][i] += A[i][j] * B[j][i];
		}
	}

	cout << endl << "result: " << endl;

	for(int i=0; i < SIZE; i++)
	{
		for(int j=0; j < SIZE; j++)
		{
			cout << A[i][j] << " * " <<  B[j][i] << " + " << A[j][i] << " * " << B[i][j] << " = " << C[j][i] << " | ";
		}

		cout << endl;
	}


	return 0;
}