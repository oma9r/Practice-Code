#include <iostream> 
using namespace std;

int main()
{


int r1,r2;
cout << "please add your range" << endl;
cin >> r1 >> r2;
if(r1<0)
{
    r1 = r1 * -1;
}
if(r2<0)
{
    r2 = r2 * -1;
}
if(r1>r2)
{
    int temp = r1;
    r1 = r2;
    r2 = temp;
}


if((r1==r2)||(r1+1==r2))
{
cout << "There's no any numbers to print here" << endl;
}
else
{
     for(int i = r1+1; i<r2;i++)
      {
        if(i%2==1)
        {
           cout << " " << i << " ";
        }
      }

}










    return 0;
}