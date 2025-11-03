#include <iostream>
#include <queue>
using namespace std;

class myStack{

	queue <int> q;

	public: 
			void push(int x){
			
				q.push(x);
				while(q.front() != x){

					q.push(q.front());
					q.pop();
				}
			};

			int top(){

				return q.front();
			};

			int size(){ return q.size(); };

			void pop(){ q.pop(); };
};
				














int main()
{

	 myStack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
        


        


        return 0;
}