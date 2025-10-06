#include <iostream>
#include <queue>
using namespace std;

// in this qpproach, we will build a stack using two queues with push O(n) and pop O(1)

class bStack
{
	private:
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
		};

		void pop()
		{
			q1.pop();
		};

		int top()
		{
			if(q1.empty()) return -1;
			else
				return q1.front();
		};

		int size()
		{
			return q1.size();
		};
};




int main()
{
	bStack st;

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
};
