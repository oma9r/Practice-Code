#include <iostream> 
#include <string>
using namespace std;

template <class Type> 
Type larger(Type x, Type y);
int main() //Line 6
{ //Line 7
cout << "Line 8: Larger of 5 and 6 = "
<< larger(5, 6) << endl; //Line 8
cout << "Line 9: Larger of A and B = "
<< larger('A','B') << endl; //Line 9
cout << "Line 10: Larger of 5.6 and 3.2 = "
<< larger(5.6, 3.2) << endl; //Line 10
string str1 = "Hello"; //Line 11
string str2 = "Happy"; //Line 12
cout << "Line 13: Larger of " << str1 << " and "
<< str2 << " = " << larger(str1, str2) << endl; //Line 13
return 0; //Line 14
};



template <class Type> 
Type larger(Type x,Type y)
 {
    if(x>= y) return x;
    else      return y;
 };