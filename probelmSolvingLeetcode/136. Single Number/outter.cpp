#include <vector>
#include <iostream>
using namespace std;

// class Solution
// {
// public:
//     int singleNumber(vector<int> &nums)
//     {
//         bool flag = true;
//         int single = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             flag = true;
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (nums[i] == nums[j])
//                 {
//                     flag = false;
//                     break;
//                 }
//             }

//             cout << "break" << endl;

//             if (flag)
//             {
//                 single = nums[i];
//                 break;
//             }
//         }
//         return single;
//     };
// };

int main()
{
    vector<int> nums = {2, 2, 1};

    bool flag = true;
    int single = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        flag = true;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                flag = false;
                break;
            }
        }

        cout << "break" << endl;

        if (flag)
        {
            single = nums[i];
            break;
        }
    }

    return 0;
}