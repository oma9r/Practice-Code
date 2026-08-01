#include <iostream>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {

        stack <char> st;
        int index = 0;
        for(int i=0; i < word.size();i++){
            if(word[i] == ch){
                index = i;
                break;
            }
        }

        if(index == 0) return word;

        for(int i=0; i <= index;i++){
            st.push(word[i]);
        }



        for(int i=0; i <= index;i++){
            word[i] = st.top();
            st.pop();
        }

        return word;


        
    }
};














int main()
{
        


        


        return 0;
}
