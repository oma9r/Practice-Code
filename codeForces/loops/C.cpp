#include <iostream>
using namespace std;

void printValues(int size, int array[])
  {

      int countEven = 0;
      int countOdd = 0;
      int countPos = 0;
      int countNeg = 0;


      for(int i=0; i < size; i++)
       {
             if(array[i] > 0)
               {
                   ++countPos;
                }

              else if(array[i] < 0)
                {
                    ++countNeg;
                              //cout << "Neg " << endl;
                }

           if(array[i]%2 == 0)
             {
                ++countEven;
             }

            else
              {
                  ++countOdd;
                 //cout << "odd " << endl;
               }
                          
        }//end for

      cout << "Even: " << countEven << endl;
      cout << "Odd: " << countOdd << endl;
      cout << "Positive: " << countPos << endl;
      cout << "Negative: " << countNeg << endl;
 }//end function


int main()
  {
        int x;
        
         cin >> x;

        int array1[x];

        for(int i=0;i<x;++i)
         {
             cin >> array1[i];
         }



        printValues(x,array1);

        return 0;
  };
         