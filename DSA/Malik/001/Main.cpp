#include <iostream> 
using namespace std;
#include "Rectangle.h"

int main()
{
      cout << "hello there!" << endl;
      int x,y;
       x = 5;
      y = 6;
      cout << x * y << endl;

      Rectangle r1;

      r1.setDimension(3,4);
      cout << "the area is: " << r1.area() << endl;



     return 0;
}