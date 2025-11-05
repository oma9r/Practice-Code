class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        int j = 0;

        while (j < nums.size()) {
            if (i >= nums.size() - 1) {
                return true;
            }

            // if(nums[i] == 0) return false;

            // if(nums[i] < nums[i-1])
            // {
            //     i = i + nums[i-1];
            // }
            // else
            // {
            i = i + nums[i];
            // }

            ++j;
        }

        return false;
    }
};