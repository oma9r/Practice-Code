#include <iostream>
using namespace std;

class nQueensPuzzle
{
	
	public: 
		nQueensPuzzle(int queens = 8);
		
		bool canPlaceQueen(int k, int i);

		void queensConfiguration(int k);

		void printConfiguration();

		int solutionsCount();

	private:
		int noOfSolutions;
		int noOfQueens;
		int *queensInRow;

};