#include <iostream> 
using namespace std;

int main()
{

   int nums[] = {100,200,300,400,500,600};

      int i=6;

      for (;;)
      {
        
        if(i==5) cout << nums[i] << endl;
        if(i==4) cout << nums[i] << endl;
        if(i==3) cout << nums[i] << endl;
        if(i==2) cout << nums[i] << endl;
        i--;
        if(i>=0) break;
      }
         












    return 0;
}