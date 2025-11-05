#include <iostream> 
#include <string>
using namespace std;

int main()
{
   const int fill = 10;

   int value[4];

   cout << "Please put your values...";
   cin >> value[0] >> value[1] >> value[2] >> value[3];

   value[3] = value[2] = value[1] = value[0] = fill;

   cout << value[0] << endl;
   cout << value[1] << endl;
   cout << value[2] << endl;
   cout << value[3] << endl;











    return 0;
}