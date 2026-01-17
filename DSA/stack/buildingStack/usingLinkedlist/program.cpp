#include <iostream>
using namespace std;

struct node{
		int value;
		node *next;
};


class stackL{
		private:
			node *top;
			int count;
		public:
			stackL(){
					top = NULL;
					count = 0;
			}

			node *creatingNode(int x){
							node *newNode = new node;
							newNode->value = x;
							newNode->next = NULL;
							
							return newNode;
			};

			void push(int x){
						
						node *newNode = creatingNode(x);
						if(top == NULL){
									top = newNode;								
						}

						else{

							newNode->next = top;
							top = newNode; 
						}
						
						++count;

			};

			void pop(){
					if(isEmpty()){
							cout << "The stack is empty" << endl;
							return;
					}

					node *deleteNode = top;
					top = top->next;
					delete deleteNode;
					deleteNode = NULL;
					--count;
			}

			int topL(){
					if(isEmpty()){
							cout << "The stack is empty" << endl;
							return -1;
					}		 

					return top->value;
			};

			int size() { return count;};


			bool isEmpty(){ return(count == 0);}


};














int main()
{
       
   stackL s;

    cout << "===== TEST 1: New stack =====" << endl;
    cout << "Is empty? (expected 1): " << s.isEmpty() << endl;
    cout << "Size (expected 0): " << s.size() << endl;
    cout << "Top (expected -1 with message): " << s.topL() << endl;

    cout << "\n===== TEST 2: Push one element =====" << endl;
    s.push(10);
    cout << "Top (expected 10): " << s.topL() << endl;
    cout << "Size (expected 1): " << s.size() << endl;
    cout << "Is empty? (expected 0): " << s.isEmpty() << endl;

    cout << "\n===== TEST 3: Push multiple elements =====" << endl;
    s.push(20);
    s.push(30);
    cout << "Top (expected 30): " << s.topL() << endl;
    cout << "Size (expected 3): " << s.size() << endl;

    cout << "\n===== TEST 4: Pop one element =====" << endl;
    s.pop();
    cout << "Top (expected 20): " << s.topL() << endl;
    cout << "Size (expected 2): " << s.size() << endl;

    cout << "\n===== TEST 5: Pop all elements =====" << endl;
    s.pop();
    s.pop();
    cout << "Is empty? (expected 1): " << s.isEmpty() << endl;
    cout << "Size (expected 0): " << s.size() << endl;
    cout << "Top (expected -1 with message): " << s.topL() << endl;

    cout << "\n===== TEST 6: Pop from empty stack =====" << endl;
    s.pop();  // should print "The stack is empty"


        


        return 0;
}