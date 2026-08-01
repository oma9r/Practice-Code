#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> ss;
        stack<char> st;

        int size = 0;
        if(s.size() <= t.size()){
            size = s.size();
        }
        else{size = t.size();}
	
	cout << "the size: " << size << endl;

        for(int i=0; i < size; i++){

            if(s[i] == '#'){
                ss.pop();
            }

	    else{
    			cout << i << " " << s.at(i) << endl;
    			ss.push(s.at(i));


  	   }


            if(t[i] == '#' && i != 0){
                st.pop();
            }
            else{
                st.push(t[i]);
            }
        }

        string texts = "";
        string textt = "";

        while(!ss.empty()){
            texts += ss.top();
            ss.pop();
        }

        while(!st.empty()){
            textt += st.top();
            st.pop();
        }

        return (textt == texts);
        
    }
};














int main()
{
	Solution s1;

	string s = "a##c";
	string t = "#a#c";

	if(s1.backspaceCompare(s,t)) {cout << "true";} else cout << "flase";

	cout << endl;
        


        


        return 0;
}
