#include <iostream> 
#include <string>
using namespace std;

int main()
{ 
    int val[5];

    cout << "please add your values...";
    cin  >> val[0] >> val[1] >> val[2] >> val[3] >> val[4];
    if((val[0] + val[4]) > val[2])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number \n";
        cout << val[0] << " + " << val[4] << " = " << val[0] + val[4] << endl;
    }

    else if((val[1] + val[4]) > val[2])
    {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number \n";
        cout << val[1] << " + " << val[4] << " = " << val[1] + val[4] << endl; 
    }

    else 
    {
    cout << "Middle Number Is The Largest \n";
    cout << val[2] << endl;
    }












    return 0;
}