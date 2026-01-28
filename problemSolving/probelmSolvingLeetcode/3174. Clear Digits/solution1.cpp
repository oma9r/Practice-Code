#include <iostream>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {


        stack <char> st;

        for(int i=0; i < s.size();i++){

            if(st.empty() && s[i] > 97){
                st.push(s[i]);
                continue;
            }

            if(s[i] <= 57){
                st.pop();
            }
            else{
                    st.push(s[i]);
            }
        }

        stack<char> stt;

        while(!st.empty()){
            stt.push(st.top());
            st.pop();
        }

        string ans = "";

        while(!stt.empty()){
            ans += stt.top();
            stt.pop();
        }

        return ans;
        

        
    }
};














int main()
{
        


        


        return 0;
}
