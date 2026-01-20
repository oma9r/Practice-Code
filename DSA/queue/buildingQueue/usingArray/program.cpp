#include <iostream>
using namespace std;


class queueA{
		private:
				int *arr;
				int begin;
				int end;
				int count;
				int sizeL;

		public:
				void init(int sizeL){

							arr = new int[sizeL];
							begin = 0;
							end = 0;
							count = 0;
							this->sizeL = sizeL;
				}

				queueA(int size = 100){

						init(size);
				}

				void push(int value){
							if(isFull()){ 
									cout << "The queue is full" << endl;
									return;
							}

							arr[end] = value;
							end = (end+1) % sizeL;
							++count;
				}

				void pop(){
						if(isEmpty()){
								cout << "The queue is empty, we can't pop anything" << endl;
								return;
						}
						begin = (begin + 1) % sizeL;
						--count;
				}


				int top() {
						if(isEmpty()){
								cout << "The queue is empty, we can't pop anything" << endl;
								return -1;
						}		
						return arr[begin];

				}


				int size(){ return count; }


				bool isFull(){ return (count == sizeL); };

				bool isEmpty() { return (count == 0); };


    				~queueA() {
        					delete[] arr;
    				}
						
				
};


int main() {

    queueA q(5);   // queue size = 5
    cout << "Queue created with size 5\n";
    // Expected: Queue created with size 5

    cout << "Is queue empty? " << q.isEmpty() << endl;
    // Expected: 1 (true)

    q.pop();
    // Expected: The queue is empty, we can't pop anything

    q.push(10);
    cout << "Pushed 10\n";
    // Expected: Pushed 10

    q.push(20);
    cout << "Pushed 20\n";
    // Expected: Pushed 20

    q.push(30);
    cout << "Pushed 30\n";
    // Expected: Pushed 30

    cout << "Front element: " << q.top() << endl;
    // Expected: Front element: 10

    cout << "Queue size: " << q.size() << endl;
    // Expected: Queue size: 3

    q.pop();
    cout << "Popped one element\n";
    // Expected: Popped one element

    cout << "Front element: " << q.top() << endl;
    // Expected: Front element: 20

    cout << "Queue size: " << q.size() << endl;
    // Expected: Queue size: 2

    q.push(40);
    cout << "Pushed 40\n";
    // Expected: Pushed 40

    q.push(50);
    cout << "Pushed 50\n";
    // Expected: Pushed 50

    q.push(60);
    // Expected: The queue is full

    cout << "Final queue size: " << q.size() << endl;
    // Expected: Final queue size: 4

    return 0;
};
