#include <iostream> 
using namespace std;
//#include "testing.h"
#include <math.h>
int sum = 0;
double fe(double n)
{
  double x,y,z;
  if(n==0)
  {
    return 1;
  }

  else 
  {
    x= n/10;
    y = (int)n % 10;
    z = x - y;
    z*=10;
    sum+=z;
    n = y;
    
    return fe(n);
  }
}

int main()
{
  fe(12345);
   cout << sum;







    return 0;
}