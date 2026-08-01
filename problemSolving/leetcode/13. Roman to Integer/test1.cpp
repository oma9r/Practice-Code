#include <iostream>
using namespace std;

class Solution 
{
public:
    int value(char s) {
    switch(s) { // Use curly braces here
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0; // Good practice: handle unexpected input
    }
}
    int romanToInt(string s) 
    {
        int j = 0;
        int sum = 0;
        for(int i=0; j < s.size();i = i + 1){
            j = i+1;
            if(value(s[i]) < value(s[j]))
	     {
		cout << i << " " << j << " - case 1 happen ==============================" << endl;
		cout << value(s[j]) << " > " << value(s[i]) << endl;
		cout << "The sum before = " << sum << endl;
                sum += value(s[j]) - value(s[i]);
		++i;
		cout << "The sum after = " << sum << endl;
            }
            else{
		cout << i << " " << j << " - case 2 happen ==============================" << endl;
		cout << "the value of normal = " << value(s[i]) << endl;
		cout << "The sum before = " << sum << endl;
                sum += value(s[i]);
		cout << "The sum after = " << sum << endl;
            }
        } 
        return sum;  
    }
};













int main()
{
	Solution s1;


	string s = "MCMXCIV";

	cout << s1.romanToInt(s);
        


        


        return 0;
}