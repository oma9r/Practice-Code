#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<pair<int,int>> vp;
    void setZeroes(vector<vector<int>>& matrix) {

        

        for(int i=0; i < matrix.size();i++){

            for(int j=0; j < matrix[i].size();j++){

                if(matrix[i][j] == 0){ vp.push_back({i,j}); break;}
            }
        }

        for(int i=0; i < vp.size();i++){

            //rows
            for(int j=0; j < matrix[vp[i].first].size();j++){
		//cout << matrix[vp[i].first][j] << endl;
                matrix[vp[i].first][j] = 0;
            }

            
            //cols
            for(int j=0; j < matrix[vp[i].second].size();j++){
		//cout << matrix[vp[i].first][j] << endl;
                matrix[vp[i].second][j] = 0;
            }

        }
        
    }


void printPair(){

	        for(int i=0; i < vp.size();i++){

			cout << vp[i].first << " , " << vp[i].second << endl;

    		}	

	cout << endl;

}


};














int main()
{
	//vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};

	vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
        
	Solution s1;
	
	s1.setZeroes(matrix);

	s1.printPair();

        


        return 0;
}
