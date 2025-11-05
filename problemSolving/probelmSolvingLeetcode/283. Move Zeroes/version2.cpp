#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        for(int i=0;i < nums.size();i++)
        {
            if(nums[i] == 0)
            {
		cout << "before erase: " << nums.size() << endl;
                nums.erase(nums.begin() + i);
		cout << "After erase: " << nums.size() << endl;
                nums.push_back(0);
		cout << "After push back: " << nums.size() << endl;
		break;	
            }
        }

        
    }
};


int main()
{
	
	Solution s1;

	vector<int> nums = {0,1,0,3,12};

	s1.moveZeroes(nums);

	return 0;
};