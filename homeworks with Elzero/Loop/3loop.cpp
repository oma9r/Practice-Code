#include <iostream> 
using namespace std;

int main()
{
for(int i=0;i<=18;i++)
{
    if(i%2==0&&i!=12&&i!=10)
    {
    cout << i << endl;
    }
}

cout << "the end of FOR" << endl;

int i=0;
while(i<=18)
{
    if(i%2==0&&i!=12&&i!=10)
    {
    cout << i << endl;
    }
    i++;
}

cout << "the end of WHILE" << endl;

    return 0;
}