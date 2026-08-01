#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {


        int j = 0;
        int i = 0;

        int size = students.size();

        for(; j < students.size();j++){

                if((size + i *size) == j){
			 
			 cout << j << " = size of " << size + i * size << " when i = " << i << endl;
			 return sandwiches.size() - i;
		}
                if(students[j] != sandwiches[i]){
                    students.push_back(students[j]);
                }
                else{
                    ++i;
                }
                
        }

        return sandwiches.size() - i;

        
    }
};













int main()
{

	Solution s1;

	vector<int> students = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0};

	vector <int> sandwiches = {0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};


	cout << "the size is " << students.size() << endl;		
	cout << s1.countStudents(students,sandwiches) << endl;
        


        


        return 0;
}
