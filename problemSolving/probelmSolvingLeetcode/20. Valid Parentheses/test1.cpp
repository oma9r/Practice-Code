#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> list;

        int i =1;

        for(i=1; i < s.length();i++)
        {
		char left = s[i-1];
		char right = s[i];
		
            if(s[i] - s[i-1] == 1 || s[i] - s[i-1] == 2)
            {
		cout << "it hit! with i = " << i << endl;
                break;
            }
            else
            {
		cout << "Push to the stack: with i = " << i << " " << s[i] << endl;
                list.push(s[i-1]);
            }
        }

        //cout << "i = " <<  i << endl;
	++i;

        while(!list.empty() && i <= s.length())
        {
            if(s[i] - list.top()  == 1 || s[i] - list.top()  == 2)
            {
                list.pop();
            }
            ++i;
        }

        return list.empty();


        
    }
};

int main()
{
	string s = "([])";
	
	Solution s1;

	if(s1.isValid(s)) cout << "True" << endl;
	else
		cout << "false" << endl;
 
	return 0;
};