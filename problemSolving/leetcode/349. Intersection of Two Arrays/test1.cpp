class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
         vector <int> nums3;
        if(nums2.size() >= nums1.size())
        {
            for(int i=0; i < nums2.size(); i++)
            {
                for(int j = 0; j < nums1.size();j++)
                    {
                        if(nums2[i] == nums1[j])
                        {

                             vector<int>::iterator it;
                            it = find (nums1.begin(), nums1.end(),nums1[j] );
                            if(it != nums1.end())
                            {
                                  break;
                                
                            }
                            else
                            {
                              nums3.push_back(nums1[j]);
                                break;
                            }
                            
                        }
                   
                    }
            }

        }
        else
        {
            
            for(int i=0; i < nums1.size(); i++)
            {
                for(int j = 0; j < nums2.size();j++)
                    {
                        if(nums1[i] == nums2[j])
                        {
                            vector<int>::iterator it;
                            it = find (nums2.begin(), nums2.end(),nums2[j]);
                           if(it != nums2.end())
                            {
                                break;
                                
                            }
                            else
                            {
                                nums3.push_back(nums2[j]);
                                break;
                            }
                        }

                    }
            }

        }

       

        return nums3;
        
    }
};