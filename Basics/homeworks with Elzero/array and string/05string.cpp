#include <iostream> 
#include <string>
using namespace std;

int main()
{
  int val[5];

  cout << "please add your inputs";
  cin >> val[0] >> val[1] >> val[2] >> val[3] >> val[4];

  if((val[0]==val[3]) && (val[1] == val[4])) cout << "Array Is Palindrome" << endl;

  else cout << "Array Is not Palindrome" << endl;







    return 0;
}