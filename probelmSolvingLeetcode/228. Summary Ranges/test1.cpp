#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector <string> str;
        int j = 0;
        int a = nums[0];
        int b = 0;

        for(int i=1; i < nums.size();i++)
        {
            
            if(nums[i] != nums[i-1] + 1)
            {
                if(i-1 == 0)
                {
		cout << nums[i] << endl;
                    str[j] = to_string(nums[0]);
                    ++j;
                    continue;

                }
                b = nums[i-1];
                str[j] = a + "->" + b;
                ++j;
                a = nums[i];
            }

            if(i == nums.size() - 1)
            {
		cout << nums[i] << endl;
                if(a == nums[i])
                {
                    str[j] = to_string(nums[i]);
                    ++j;
                }
            }
        }

        return str;

        
    }


	void print(vector<string> str)
	{
		for(int i=0; i< str.size();i++)
		{
			cout << str[i] << endl;
		}
	};
};




int main()
{

	Solution s1;

	vector <int> nums = {0,1,2,4,5,7}; 

	s1.print( s1.summaryRanges(nums) );

	return 0;
}