#include <iostream>
using namespace std;

class stackB{

		private:
			int topL;
			int count;
			int capacity;


		public:
			int *arr;

			stackB(int size = 100){
					this->init(size);
			}

			void init(int size){
						this->count = 0;
						this->arr = new int[size];
						this->topL = -1;
						this->capacity = size;
			} 
			bool isFull(){

					return (count == capacity);
			}

			bool isEmpty(){

					return (count == 0 && topL == -1);
			}

			void push(int value){
						if(this->isFull()){
							cout << "The stack is full, try to pop to add new elements..." << endl;
							return;
						}
						++this->topL;
						this->arr[topL] = value;
						++this->count;
			}

			void pop(){
					
					if(this->isEmpty()){
						 cout << "The stack is empty, try to push some elements to pop it later..." << endl; 
						 return;
					}
					--this->topL;
					--this->count;
			}

			int top(){ 
					if(this->isEmpty()){ 
							cout << "Empty stack" << endl;
							return 0;
					}
					return this->arr[topL];
			};

			int size() { return this->count;};

			~stackB(){
   					 delete[] arr;
			}

};



int main()
{

cout << "===== TEST 1: Default constructor =====" << endl;
    stackB s1;
    cout << "Is empty? (expected 1): " << s1.isEmpty() << endl;
    cout << "Size (expected 0): " << s1.size() << endl;

    cout << "\n===== TEST 2: Push one element =====" << endl;
    s1.push(10);
    cout << "Top (expected 10): " << s1.top() << endl;
    cout << "Size (expected 1): " << s1.size() << endl;
    cout << "Is empty? (expected 0): " << s1.isEmpty() << endl;

    cout << "\n===== TEST 3: Push multiple elements =====" << endl;
    s1.push(20);
    s1.push(30);
    cout << "Top (expected 30): " << s1.top() << endl;
    cout << "Size (expected 3): " << s1.size() << endl;

    cout << "\n===== TEST 4: Pop one element =====" << endl;
    s1.pop();
    cout << "Top (expected 20): " << s1.top() << endl;
    cout << "Size (expected 2): " << s1.size() << endl;

    cout << "\n===== TEST 5: Pop all elements =====" << endl;
    s1.pop();
    s1.pop();
    cout << "Is empty? (expected 1): " << s1.isEmpty() << endl;
    cout << "Size (expected 0): " << s1.size() << endl;

    cout << "\n===== TEST 6: Pop on empty stack =====" << endl;
    s1.pop();   // should print warning

    cout << "\n===== TEST 7: Custom size constructor =====" << endl;
    stackB s2(3);
    cout << "Is empty? (expected 1): " << s2.isEmpty() << endl;

    cout << "\n===== TEST 8: Push until capacity =====" << endl;
    s2.push(1);
    s2.push(2);
    s2.push(3);
    cout << "Top (expected 3): " << s2.top() << endl;
    cout << "Size (expected 3): " << s2.size() << endl;

    cout << "\n===== TEST 9: Push beyond capacity =====" << endl;
    s2.push(4); // should trigger "stack is full" message

    cout << "\n===== TEST 10: LIFO behavior check =====" << endl;
    s2.pop();
    cout << "Top (expected 2): " << s2.top() << endl;
    s2.pop();
    cout << "Top (expected 1): " << s2.top() << endl;

    cout << "\n===== TESTS COMPLETED =====" << endl;

    return 0;
}