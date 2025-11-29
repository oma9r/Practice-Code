#include <iostream>
#include <vector>
using namespace std;


	int count = 1;

class Solution 
{
	
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> result(1001);
        vector<int> total;

        for(int i= 0 ; i < 1001;i++)
        {
            result[i] = 0;
        }

        for(int i=0; i < nums1.size();i++)
        {
            ++result[nums1[i]];
        }


        
        for(int i=0; i < nums2.size();i++)
        {

            ++result[nums2[i]];
        }


	for(int i=0; i < result.size();i++)
        {
            if(result[i] == 2)
            {
		++count;
            }
        }

        
        for(int i=0; i < count;i++)
        {
            if(result[i] == 2)
            {
	        total[i] = i;
            }
        }

        return total;
    }
};


void printArray(vector<int> &vectorList, int size)
{
	for(int i=0; i< size;i++)
	{			
		cout << vectorList[i];
	}

	cout << endl;
};










int main()
{

	vector<int> list1 = {1,2,2,1};
	vector<int> list2 = {2,2};

	Solution s1;


	vector<int> result = s1.intersection(list1,list2);

	printArray(result,count);	
        


        


        return 0;
}
