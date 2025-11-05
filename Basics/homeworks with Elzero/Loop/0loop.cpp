#include <iostream> 
using namespace std;

int main()
{
    // for output 
    cout << "for output: " << endl;
    for(int j=0; j<11 ; j++)
    {
        cout << j << endl;
    }
    cout << "====================" << endl;

    //while output
    cout << "while output" << endl;
    int i=0;
    while(i<11)
    {
      cout << i << endl;
      i++;
    }
    cout << "====================" << endl;

    // do while output 
    cout << "do while" << endl;
    i=0;
    do
    {
        cout << i << endl;
        i++;
    } while( i<11);

    cout << "====================" << endl;

















return 0;
}