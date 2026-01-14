#include <iostream>
using namespace std;


struct node{
		int value;
		node *next;
};

class list{

	private:
		node *head;
		node *last;
		int size;



	public:

		list(){
			head = NULL;
			last = NULL;
			size = 0;
		};

		node *creatingNode(int value){

						node *newNode = new node;
						newNode->value = value;
						newNode->next = NULL;
						
						return newNode;

		};

		void insertAtHead(int value){
						node *newNode = creatingNode(value);

						if(head == NULL){
									head = newNode;
									last = newNode;
						}

						else
						{
							newNode->next = head;
							head = newNode;
						}

						++size;
		};

		void insertAtTail(int value){

						node *newNode = creatingNode(value);

						if(head == NULL){
									head = newNode;
									last = newNode;
						}

						else{
							last->next = newNode;
							last = newNode;
						}
				
						++size;
		};

		void insertAt(int index,int value){
							node *newNode = creatingNode(value);

							node *current = head;
							
							for(int i=0; i < size && current != NULL;i++){

								if(index == i){
										node *post = current->next;
										current->next = newNode;
										newNode->next = post;
										++size;
										return;
								}

								current = current->next;

							}

							cout << "Could'nt adding this node, check the index value = " << index << endl;
		};

		void deleteFromHead(){

					if(isEmpty()){cout << "No nodes to delete" << endl; return;};

					node *newNode = head;
					head = head->next;
					--size;
					delete newNode;
		};

		void deleteFromTail(){
					if(isEmpty()){cout << "No nodes to delete" << endl; return;};

					node *current = head;

					while(current != NULL){

								if(current->next == last) break;
								current = current->next;
					};

					last = current;
					current = current->next;
					last->next = NULL;
					--size;
					delete current;
		};

		void deleteAt(int index){
					if(isEmpty()){cout << "No nodes to delete" << endl; return;};

					node *prev = NULL;
					node *current = head;

					for(int i = 0; current != NULL;i++){
						
						if(i == index){
								if(i == 0) prev = head;
								prev->next = current->next;
								delete current;
								--size;
								return;
						}

						prev = current;
						current = current->next;
					}

		};	

		void printList(){
					node *current = head;
					while(current != nullptr){
								cout << current->value << " ";
								current = current->next;
					}

					cout << endl;
		};

		bool isEmpty(){

					return (head == NULL);
		};

		int getLength(){ return size;};

		bool searchByValue(int value){
						if(isEmpty()){cout << "No nodes to delete" << endl; return false;};
						
						node *current = head;
						while(current != NULL){

							if(current->value == value) return true;
							current = current->next;
						}

					return false;
		};

		void deleteList(){
					node *current = head;
					node *prev;

					while(current != NULL){
						
						prev = current;
						current = current->next;
						delete prev;
						--size;
					}
					head = NULL;

		};

};

int main()
{
        

	list list1;

	list1.insertAtTail(4);
	list1.insertAtTail(8);
	list1.insertAtTail(2);
	list1.insertAtTail(3);
	list1.insertAtTail(7);

	cout << "line1:the size is: " << list1.getLength() << endl;

	list1.printList();

	list1.insertAtHead(9);
	list1.insertAtHead(100);
	list1.insertAtHead(12);
	list1.insertAtHead(-1);


	cout << "line2:the size is: " << list1.getLength() << endl;

	list1.printList();

	list1.insertAt(3,33);
	list1.insertAt(4,44);
	list1.insertAt(6,66);


	cout << "line3:the size is: " << list1.getLength() << endl;

	list1.printList();

	list1.deleteFromHead();
	list1.deleteFromTail();
	list1.deleteFromHead();

	list1.printList();



	list1.deleteAt(6);


	cout << "line4:the size is: " << list1.getLength() << endl;

	list1.printList();

	if(list1.searchByValue(100)) cout << "100 is excited" << endl;
	
	list1.deleteAt(7);

	cout << "line5:the size is: " << list1.getLength() << endl;

	list1.printList();

	if(list1.searchByValue(66)) cout << "66 is excited" << endl;


	cout << "==========================================================================================================================" << endl;

    list myList;

    cout << "Initial list (should be empty): ";
    myList.printList();
    cout << "Length: " << myList.getLength() << endl;
    cout << "-----------------------------" << endl;

    // Insert at head
    cout << "Insert at head: 10, 20, 30" << endl;
    myList.insertAtHead(10);
    myList.insertAtHead(20);
    myList.insertAtHead(30);
    myList.printList();      // 30 20 10
    cout << "Length: " << myList.getLength() << endl;
    cout << "-----------------------------" << endl;

    // Insert at tail
    cout << "Insert at tail: 40, 50" << endl;
    myList.insertAtTail(40);
    myList.insertAtTail(50);
    myList.printList();      // 30 20 10 40 50
    cout << "Length: " << myList.getLength() << endl;
    cout << "-----------------------------" << endl;

    // Insert at index
    cout << "Insert value 99 at index 2" << endl;
    myList.insertAt(2, 99);
    myList.printList();      // 30 20 99 10 40 50
    cout << "Length: " << myList.getLength() << endl;
    cout << "-----------------------------" << endl;

    // Search
    cout << "Search for value 99: ";
    cout << (myList.searchByValue(99) ? "Found" : "Not Found") << endl;

    cout << "Search for value 100: ";
    cout << (myList.searchByValue(100) ? "Found" : "Not Found") << endl;
    cout << "-----------------------------" << endl;

    // Delete from head
    cout << "Delete from head" << endl;
    myList.deleteFromHead();
    myList.printList();
    cout << "Length: " << myList.getLength() << endl;
    cout << "-----------------------------" << endl;

    // Delete from tail
    cout << "Delete from tail" << endl;
    myList.deleteFromTail();
    myList.printList();
    cout << "Length: " << myList.getLength() << endl;
    cout << "-----------------------------" << endl;

    // Delete at index
    cout << "Delete at index 2" << endl;
    myList.deleteAt(2);
    myList.printList();
    cout << "Length: " << myList.getLength() << endl;
    cout << "-----------------------------" << endl;

    // Delete entire list
    cout << "Delete entire list" << endl;
    myList.deleteList();
    myList.printList();
    cout << "Length: " << myList.getLength() << endl;
	
        


        return 0;
}
