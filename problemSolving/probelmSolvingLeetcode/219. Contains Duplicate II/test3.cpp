#include <iostream>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        if(k == 0) return false;

        if(nums.size() == 2){
            if(nums[0] == nums[1]) return true;
        }
        for(int i = k; i < nums.size() ;i++){
            if(nums[i] == nums[i-k]) return true;  
        }

        return false;
    }
};



        // for(int i = nums.size() - 1; i >= 0 ;--i){
        //     if(i - k >= 0 && nums[i] == nums[i-k]) return true;  
        // }




int main()
{
        


        


        return 0;
}
