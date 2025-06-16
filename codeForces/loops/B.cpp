#include <iostream> 
using namespace std;

 void printEven(int N)
  {
      bool noEven = true;
    
      for(int i=1;i<=N;++i)
        {
            if(i%2 == 0)
             {
              cout << i << endl;
              noEven = false;
             }
        }

        if(noEven) cout << -1 << endl;
  }
	


int main()
 {
    int x;
 
     cin >> x;

     printEven(x);
  
    return 0;
}