#include <iostream> 
#include <string>
using namespace std;

int main()
{
  int val[3];

  cout << "please add your inputs\n";
  cin  >> val[0] >> val[1] >> val[2];
  val[0]*=10; 
  val[1]*=10;
  val[2]*=10;
  cout << val[0] << endl;
  cout << val[1] << endl;
  cout << val[2] << endl;






    return 0;
}