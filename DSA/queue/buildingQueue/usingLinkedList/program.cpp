#include <iostream>
using namespace std;

struct node{
		int value;
		node *next;
};


class queueL{
		private:
				node *front;
				node *rear;
				int count;

		public:
				queueL(){

						count = 0;
						front = NULL;
						rear = NULL;
				}

				~queueL(){
						node *current = front;
						while(current != NULL){

							node *d = current;
							current = current->next;
							delete d;

						}
				}

				node *creatingNode(int value){
								node *newNode = new node;
								newNode->value = value;
								newNode->next = NULL;
								
								return newNode;		
				}


				bool isEmpty(){ return (count == 0); };

				void push(int value){
							node *newNode = creatingNode(value);
							
							if(isEmpty()){
									front = newNode;
									rear = newNode;
							}
							
							else{
								rear->next = newNode;
								rear = rear->next;

							}

							++count;
				};

				void pop(){
						if(isEmpty()){ cout << "The queue is empty" << endl; return; }

						else{
							node *d = front;
							front = front->next;
							delete d;
							--count;

							if(front == NULL){ rear = NULL; };

						}

				};


				int top(){ 
						if(isEmpty()){ 
								cout << "The queue is empty" << endl; 
								return -1;
						}

						else{
							return front->value;
						}
				};

				int size(){ return count; };


};



int main()
{

	queueL q1;

	cout << "The size of queue is (supposed 0): " << q1.size() << endl;

	int x = 10;

	q1.push(x);

	cout <<"push 10, first element" << endl;
	
	x = 20;

	q1.push(x);

	cout <<"push 20, second element" << endl;

	x = 30;

	q1.push(x);

	cout <<"push 30, third element" << endl;

	cout << "The size of queue is (supposed 3): " << q1.size() << endl;


	q1.pop();

	cout << "we make pop operation, which the size decrese" << endl;

	cout << "The size of queue is (supposed 2): " << q1.size() << endl;

	

	x = 40;
	
	q1.push(x);

	cout <<"push 40, second element" << endl;

	cout << "The size of queue is (supposed 3): " << q1.size() << endl;

        return 0;
}