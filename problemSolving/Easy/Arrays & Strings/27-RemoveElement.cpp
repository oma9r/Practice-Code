/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector<int> nums2;
        
        int j = 0;
        
        for(int i = 0; i< nums.size();++i)
        {
            if(nums[i] != val)
            {
                nums2[j] = nums[i];
                ++j;
            }
        }
        
        int rest = nums.size() - nums2.size();
        
        for(int i= nums2.size(); i < nums.size(); ++i)
        {
            nums2.push_back(0);
        }
        
        
        // cout << nums2.size() << ", " << "nums = " << "[ ";
        // for(int i=0;i<nums2.size();++i)
        // {
            
        //     if(i == nums2.size() - 1)
        //     {
        //         cout << nums2[i];
        //         continue;
        //     }
            
        //     cout << nums2[i] << ", ";
        // }
        
        // cout << " ]";
        
        cout << nums2.size();
        
        if(nums2.size() == 0)
        {
            cout << "null" << endl;
        }
        
        return nums2.size();
        
        
    }
};


int main()
{
    
    vector <int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    Solution s1;
    
    cout << s1.removeElement(nums,val);
cout << 2;
    

    return 0;
}