#include <iostream>
#include <vector>
#include <limits.h>
#include <map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int min = INT_MAX;
        for(int i=0; i < nums.size();i++){
            if(nums[i] <= min) min = nums[i];
        }

	bool flag = false;

        if(min < 0){
		flag = true;
	
            min = min * -1;
            for(int i=0; i < nums.size();i++){
                nums[i] += min;
            }
        }
        map <int,int> list;
        for(int i=0; i < nums.size();i++){
                ++list[nums[i]];
        }
        int max = INT_MIN;
        int maxIndex = 0;
        for(int i=0; i < list.size();i++){
            if(list[i] >= max) {
                max = list[i];
                maxIndex = i;
            }
        }

        if(flag){
                        return maxIndex -1;
        }

        return maxIndex;
    }
};


int main()
{
	Solution s1;

	//vector<int> nums = {3,2,3};
	//vector<int> nums = {2,2,1,1,1,2,2}; 
	//vector<int> nums = {-1,1,1,1,2,1};
	vector <int> nums ={1000000000,1000000000,-1000000000,-1000000000,-1000000000};

	cout << "The result: " << s1.majorityElement(nums);
	
	






return 0;
};