#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
    public:
    vector<vector<int>> generate(int numRows) 
    {
        vector <vector <int> > nums;
        //nums[0][0] = 1;

        for(int i=0; i < numRows;i++)
            {
                for(int j=0;j <= i;j++)
                    {
                        if(i == j || j == 0)
                        {
			    			    cout << "if 1 =============================== " << endl;
			    if(i == j ) cout << "i = " << i << " j = " << j << endl;

			   // else if(j == 0) cout << "i = " << i << " j = " << j << endl;

                            nums[i][j] = 1;

			    cout << "if 1 =============================== " << endl;
                        }
                        else
                        {
				cout << "else if=============================== " << endl;

			    cout << "**************** Before: ************************" << endl;
			    cout << "i - 1 = " << i-1 << endl;
			    cout << "j - 1 = " << j-1 << endl;

			    cout << "nums[" << i-1 << "]" << "[" << j-1 << "] = " << nums[i-1][j-1] << endl;

			    cout << "j = " << j << endl;
			    cout << "nums[" << i-1 << "]" << "[" << j << "] = " << nums[i-1][j] << endl;

			    cout << "nums[" << i << "]" << "[" << j << "] = " << nums[i][j] << endl;
	
                            nums[i][j] = nums[i-1][j-1] + nums[i-1][j];

			    cout << "**************** After: ************************" << endl;

			    cout << "nums[" << i-1 << "]" << "[" << j-1 << "] = " << nums[i-1][j-1] << endl;
			    cout << "nums[" << i-1 << "]" << "[" << j << "] = " << nums[i-1][j] << endl;
			    cout << "nums[" << i << "]" << "[" << j << "] = " << nums[i][j] << endl;



			    cout << "else if=============================== " << endl;
                        }
                    }
            }

        return nums; 
    }
};


int main()
{
    Solution s1;

    vector<vector<int>> nums;

    nums = s1.generate(5);


   cout << "=======================================================================" << endl;

    if (nums.size() == 0)
        cout << "NULL" << endl;

    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = 0; j < i; ++j)
        {

            cout << nums[i][j] << " ";
        }
    }

    cout << endl;

    return 0;
};