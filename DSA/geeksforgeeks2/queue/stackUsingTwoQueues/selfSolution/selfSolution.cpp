#include <iostream>
#include <queue>
using namespace std;


class mystack
{
	queue <int> q1,q2;

	public: 
			void push(int x)
			{
				q2.push(x);
				
				while(!q1.empty())
				{
					q2.push(q1.front());
					q1.pop();
				}

				swap(q1,q2);
			}

			void pop()
			{
				q1.pop();
			}

			int top()
			{
				return q1.front();
			}


			int size()
			{
				return q1.size();
			}

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
