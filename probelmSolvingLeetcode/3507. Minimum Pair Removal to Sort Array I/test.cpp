class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) 
    {
        int sum = 0;
        int temp = 0;
        int count = 0;

        if(nums.size() == 1 || nums.size() == 0) return 0;

        sum = nums[0] + nums[1];

        for(int i =0; i < nums.size();i++)
            {
                for(int j=i+1;j < nums.size();j++)
                    {
                        temp = nums[j] + nums[i];
                        if(temp < sum)
                        {
                            sum = temp;
                            nums[i] = sum;
                            nums.erase(nums.begin() + j);
                            sum = 2000;
                            i = 0;
                            j = i + 1;
                            ++count;
                        }
                    }
            }

        return count;

        
    }
};