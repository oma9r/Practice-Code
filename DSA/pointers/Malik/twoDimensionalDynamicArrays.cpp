#include <iostream>
#include <iomanip>

using namespace std;

void fill(int **p,int rowSize,int columnSize);
void print(int **p, int rowSize,int columnSize);

int main()
{
	int **board;

	int rows;
	int columns;

	cout << "Line 11: Enter the number of rows " << "and columns: ";
	cin >> rows >> columns;
	cout << endl;

	board = new int*[rows];

		for(int row = 0; row < rows; row++)
		{
			board[row] = new int [columns];
		}

		fill(board,rows,columns);

		cout << "Line 18: Board:" << endl;

		print(board,rows,columns);

return 0;
};


void fill(int **p, int rowSize, int columnSize)
 {
     for(int row = 0; row < rowSize; row++)
      {
           cout << "Enter " << columnSize << " number(s) for row " << "number " << row << ": ";

	   for(int col = 0; col < columnSize; col++)
            {
                cin >> p[row][col];
	    }

		cout << endl;
	}
  }

void print(int **p, int rowSize, int columnSize)
{
	for(int row =0; row < rowSize; row++)
	{
		for(int col=0; col < columnSize; col++)
			cout << setw(5) << p[row][col];
		cout << endl;
	}
}
			