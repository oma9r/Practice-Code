#include <iostream> 
#include "box.h"
using namespace std;

int main()
{
  
  rectangle r1;
  box b1;

  b1.setDimenstion(3,4,5);
  r1.setDimenstion(6,7);
  cout << r1.area() << endl;



    return 0;
};