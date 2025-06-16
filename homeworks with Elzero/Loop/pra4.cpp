#include <iostream> 
using namespace std;

int main()
{

   int sum1 = 0;
   int sum2 = 0;
   int val[] = {13,14,-10,-5,12,-11,19,-20};

   int size = 8;

   for (int i=0 ; i<8 ; i++)
   {
      
     if(val[i] % 2 == 0) 
     {
      sum2+=val[i];
     }

     else if(val[i] % 2 == 1)
     {
        sum1+=val[i];
     }

     else if (val[i] == 0)
     {
        continue;
     }
    
   }
  cout << "1: " << sum1 << endl << "2: " << sum2 << endl;

return 0;
}