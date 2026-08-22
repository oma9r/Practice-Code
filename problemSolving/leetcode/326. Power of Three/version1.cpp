#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(float n) {

        if( n < 2 && n > 1){
			
		 cout << "first condition" << endl;
		 return false;
	}
	
        else if(n == 0){ 
	
		 cout << "second condition" << endl;
		 return false;
	}

        else if(n == 1) return true;

        return isPowerOfThree(n/3.0);
        
    }
};













int main()
{
        Solution s1;

	if(s1.isPowerOfThree(1162261467)){

		cout << "true" << endl;

	}

	else{

		cout << "false" << endl;
	}


        


        return 0;
}
