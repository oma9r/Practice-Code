#include <iostream>
#include <queue> 
using namespace std;

class mystack
{

	queue<int> q1,q2;


	public: 
			void push(int x){
					
					q1.push(x);
					
			};

		
			void pop(){
					if(q1.empty()) return;

					else{
						
						while(q1.size() != 1)
						{
							q2.push(q1.front());
							q1.pop();
						}

						q1.pop();
						
						swap(q1,q2);
						
					}
			};

			int top(){
					int temp;
					if(q1.empty()) return -1;


					else{
					
						while(q1.size() != 1)
						{
							q2.push(q1.front());
							q1.pop();
						}

						temp = q1.front();

						q2.push(q1.front());

						q1.pop();

						swap(q1,q2);

						return temp;
					}

				};


			int size(){
					return q1.size();
			};


};
	













int main()
{

    mystack st;
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
