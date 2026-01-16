class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = nums.size() - 1; i >= 0 ;--i){
            if(i - k >= 0 && nums[i] == nums[i-k]) return true;  
        }
        return false;
    }
};



