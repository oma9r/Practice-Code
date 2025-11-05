#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = 0;
        int min = 10000;
        int indexMin = 0;
        int indexMax = 0;

        for (int i = 0; i < prices.size(); i++)
        {

            // cout << "Iteration " << i << ": " << endl;
            // cout << "min before: " << min << endl;
            // cout << "prices[" << i << "]" << " before: " << prices[i] << endl;
            // cout << "indexMin before: " << indexMin << endl;

            // if (prices[i] < min)
            // {
            //     min = prices[i];
            //     indexMin = i;
            // }

            if (prices[i] > max)
            {
                max = prices[i];
                indexMax = i;
            }

            // cout << "min after: " << min << endl;
            // cout << "prices[" << i << "]" << " after: " << prices[i] << endl;
            // cout << "indexMin after: " << indexMin << endl;
            // cout << "======================================================" << endl;
        }

        for (int i = 0; i < indexMax; ++i)
        {
            // bool flag = false;
            if (prices[i] < min)
            {
                min = prices[i];
            }
        }

        if (min == 10000)
            return 0;
        else
        {
            return max - min;
        }
    }
};

int main()
{

    vector<int> nums1 = {7, 1, 5, 3, 6, 4};

    vector<int> nums2 = {2, 4, 1};

    vector<vector<int>> grid = {nums1, nums2};

    Solution s1;

    for (int i = 0; i < grid.size(); i++)
    {
        cout << s1.maxProfit(grid[i]) << endl;
    }

    return 0;
}
