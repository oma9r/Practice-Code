#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(float n) {

        if(n < 2.0 && n != 1.0){ 
		
		cout << "n value = " << n << endl;
		cout << "failed! - case 1" << endl;
		return false;
	}

        else if(n == 1){ 
		
		cout << "success!" << endl;
		return true;
	}

        else if(n == 0){ 
		
		cout << "failed!" << endl;
		return false;
	}

	cout << n << endl;
        return isPowerOfThree(n/3.0);
        
    }
};











int main()
{
        Solution s1;

bool check = s1.isPowerOfThree(1162261467);


	//bool check = s1.isPowerOfThree(45);

	

	if(check){

		cout << "true" << endl;

	}

	else{

		cout << "false" << endl;
	}


        


        return 0;
}
