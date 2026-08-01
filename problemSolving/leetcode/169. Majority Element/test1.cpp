class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int max = 0;
        int iBig = 0;

        
        for(int i=0; i< nums.size();i++)
        {
            if(nums[i] >= max)
            {
                max = nums[i];
            }
        }

        if(max == 1000000000){
            max = 10;
            
        }

        vector<int> nums1(max+1);

        for(int i=0;i<nums1.size();i++)
        {
            nums1[i] = 0;
        }

        int temp = 0;

        for(int i=0; i < nums.size();i++)
        {
            temp = nums[i];
            if(temp < 0 )
            {
                for(int j = i+1;j < nums.size();j++)
                {
                    if(nums1[j] == 0)
                    {
                        temp = j;
                        ++nums1[temp];
                        break;
                    }
                }
            }
            else
            {
                 if(temp > 100000000)
                 {
                    ++nums1[iBig];
                    ++iBig;
                    continue;
                 }
                ++nums1[temp];
            }
            

        }

        max = 0;
        int index = 0;

        for(int i=0; i< nums1.size();i++)
        {
            if(nums1[i] >= max)
            {
                max = nums1[i];
                index = i;

            }
        }
        
        return index;
    }
};