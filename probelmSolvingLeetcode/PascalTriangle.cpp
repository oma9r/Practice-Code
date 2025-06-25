
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> outterVector;

        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j < i; ++j)
            {
                if (i == j)
                {
                    outterVector[i][j] = 1;

                    cout << i << " = " << j << endl;
                }

                // else
                // {
                //     // int a = i - 1;
                //     // int b = j - 1;
                //     outterVector[i][j] = outterVector[i - 1][j - 1] + outterVector[i-1][j];

                //     cout << i << " != " << j << endl;

                // }
            }
        }

        return outterVector;
    }
};

int main()
{
    Solution s1;

    vector<vector<int>> nums;

    nums = s1.generate(5);

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
}