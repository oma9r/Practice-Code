#include <iostream> 
using namespace std;

int main()
{
    int x = 10;
   for(int i=0;i<4;i++)
   {
     cout << x << endl;
     x = x * x;
   }

   cout << "end of FOR loop" << endl;
   
   int y = 10;
   int i = 0;
   while(i<4)
   {
    cout << y << endl;
    y = y * y;
    i++;
   }
cout << "end of WHILE loop" << endl;


}