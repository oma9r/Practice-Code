#include <iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) 
    {
        int index = -1;
        for(int i=0; i < s.size();i++){

            int j = i + 1;

            while(j < s.size()){

                if(s[i] == s[j]){
                    break;
                }
                ++j;
            }

            if(j == s.size()){
                index = i;
                break;
            }


        }
        

    if(index == 1) return -1;
    return index;



        
    }
};














int main()
{
        


        


        return 0;
}
