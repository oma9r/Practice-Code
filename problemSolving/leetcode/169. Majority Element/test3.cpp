#include <iostream>
#include <vector>
#include <map>
#include <limits.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int,int> map1;

        int min = INT_MAX;

        for(int i=0; i < nums.size();i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }



	bool flag = false;

        if(min < 0){
		flag = true;
            min = min * -1;
            for(int i=0; i < nums.size();i++){
               nums[i] += min;

            }
        }

        for(int i=0; i < nums.size();i++){
            ++map1[nums[i]];
        }

        int max = INT_MIN;
        int index = 0;

        for(int i = 0; i < map1.size();i++){
            if(map1[i] > max){
                max = map1[i];
                index = i;
            }
        }

	if(flag){
			min = min * -1;
			index += min;
	}

        return index;

       
    }
};













int main()
{
	Solution s1;        

	vector<int> nums = {-1,1,1,1,2,1};
	cout << "The result: " << s1.majorityElement(nums) << endl;

        


        return 0;
}
