#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
	if(nums.size() == 1) return;

	cout << "Before: " << endl;

	print(nums);

        sort(nums.begin(), nums.end());

	cout << "After " << endl;
	print(nums);

        int indexStart = 0;

        // int j = nums.size() - 1;

	cout << "======================= " << endl;

	cout << "Finding the zero index: " << endl;

	bool isZero = true;


        for (int i = 0; i < nums.size(); i++)
        {

	    	
            if (nums[i] != 0)
            {
		cout << nums[i] << endl;
		cout << "the index: " << i << endl;
                indexStart = i;
		isZero = false;
                break;
            }

		cout << "num[" << i << "] is zero: " << nums[i] << endl;
        }

	if(isZero)
	{
		cout << "all zero: " << endl;
		return;
	}

        int z = indexStart;

	cout << "======================= " << endl;

	cout << "indexStart = " << z << endl;

	cout << "======================= " << endl;

	cout << "Before Process: " << endl;

	print(nums);


        for (int i = 0; i < nums.size(); i++)
        {
            if (i > indexStart)
            {
                nums[i] = 0;
                continue;
            }
            nums[i] = nums[z];
	    nums[z] = 0;
            ++z;
        }
    }


void print(vector <int> &nums)
{
	for(int i : nums)
	{
		cout << i << " ";
	}
	cout << endl;
}; 

};




int main()
{
	
	Solution s1;

	//vector <int> nums = {0,1,0,3,12};    // testcase 1

	//vector <int> nums = {0};    // testcase 2

	//vector <int> nums = {0,0};    // testcase 3

	vector <int> nums = {0,1};    // testcase 4	
 
	s1.moveZeroes(nums);

	cout << "return done, then print: " << endl;

	s1.print(nums);

	return 0;
}