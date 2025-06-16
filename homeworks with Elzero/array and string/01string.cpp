#include <iostream> 
#include <string.h>
using namespace std;

int main()
{

   int num[4];

   string awards[4];

   cout << "Please put the number of the awards and the name of the awards...\n";
   cout << "the first number and its award: "; 
   cin >> num[0] >> awards[0];
   cout << "the second number and its award: "; 
   cin >> num[1] >> awards[1];
   cout << "the third number and its award: "; 
   cin >> num[2] >> awards[2];
   cout << "the last number and its award: "; 
   cin >> num[3] >> awards[3];

   cout << "Number " << num[0] << " Award is: " << awards[0] << endl; 
   cout << "Number " << num[1] << " Award is: " << awards[1] << endl;
   cout << "Number " << num[2] << " Award is: " << awards[2] << endl; 
   cout << "Number " << num[3] << " Award is: " << awards[3] << endl;
    return 0;
}

