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

        for (int i = 0; i < prices.size(); i++)
        {

            cout << "Iteration " << i << ": " << endl;
            cout << "min before: " << min << endl;
            cout << "prices[" << i << "]" << " before: " << prices[i] << endl;
            cout << "indexMin before: " << indexMin << endl;

            if (prices[i] < min)
            {
                min = prices[i];
                indexMin = i;
            }

            cout << "min after: " << min << endl;
            cout << "prices[" << i << "]" << " after: " << prices[i] << endl;
            cout << "indexMin after: " << indexMin << endl;
            cout << "======================================================" << endl;
        }

        for (int i = indexMin + 1; i < prices.size(); i++)
        {
            if (prices[i] > max)
            {
                max = prices[i];
            }
        }

        if (max == 0)
            return max;
        else
        {
            return max - min;
        }
    }
};

int main()
{

    // vector<int> nums = {7, 1, 5, 3, 6, 4};

    vector<int> nums = {2, 4, 1};

    Solution s1;

    cout << s1.maxProfit(nums) << endl;

    return 0;
}
