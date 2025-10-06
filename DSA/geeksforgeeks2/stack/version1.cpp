#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int celebrity(int **mat, int n) 
{
    
    for(int i=0; i < n;i++)
    {
        stack <int> st;
        
        for(int j = 0; j < n; j++)
        {
           if(st.size() == 2) break;
           
           if(mat[i][j] == 1)
           {
               st.push(mat[i][j]);
           }
        }
        
        if(st.size() == 1) return i;
    }
    
    return -1;
    
    // code here
    
}

int main()
{
     int rows = 3, cols = 3;

    int** mat = new int*[rows];
    for (int i = 0; i < rows; i++) {
        mat[i] = new int[cols];
    }

   
    //int temp[3][3] = {{1, 1, 0},{0, 1, 0},{0, 1, 1}};

      int temp[3][3] = {{1, 1, 1},{0, 1, 0},{1,0, 1}};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = temp[i][j];
        }
    }




	cout << celebrity(mat,3);



	



	return 0;

}