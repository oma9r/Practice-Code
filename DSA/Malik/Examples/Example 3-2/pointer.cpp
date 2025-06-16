#include <iostream> 

using namespace std;


int main()
    {

        int *p;
        int num1 = 5;
        int num2 = 8;
        
        p = &num1;
        
        cout << "Line9: &num1 = " << &num1 << ", p = " << p << endl;
       
        cout << "Line10: num1 = " << num1 << ", *p = " << *p << endl;

        *p = 10;

         cout << "Line 12: &num1 = " << &num1 << ", *p = " << *p << endl;

         p = &num2;

         cout << "Line14: &num2 = " << &num2 << ", p= " << p << endl;
         cout << "Line15: num2 = " << num2 << ", *p = " << *p << endl;

         *p = 2 * (*p);

          cout << "Line17: num2 = " << num2 << ", *p = " << *p << endl;


      return 0;
    }