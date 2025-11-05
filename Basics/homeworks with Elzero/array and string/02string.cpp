#include <iostream> 
#include <string>
using namespace std;

int main()
{
    const int check = 25;
    
    int num[5];
    cout << "Please add your values: ";
    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
    if(num[0] > check)
    {
        cout << "{" << num[0] << "} + {" << num[3] << "} = " << num[0] + num[3] << endl; 
    }

     if(num[1] > check)
    {
        cout << "{" << num[1] << "} + {" << num[3] << "} = " << num[1] + num[3]<< endl; 
    }

     if(num[2] > check)
    {
        cout << "{" << num[2] << "} + {" << num[3] << "} = " << num[2] + num[3]<<endl; 
    }







    return 0;
}