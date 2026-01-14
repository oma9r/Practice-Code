#include <iostream>
using namespace std;

class arr{

	private:
			int *basePointer;
			int *currentPointer;
			int currentIndex;
			int size;

	public:
			void setBasePointer(int *basePointer){ this->basePointer = basePointer;};

			int *getBasePointer(){ return this->basePointer;};

			void setCurrentPointer(int *currentPointer){this->currentPointer = currentPointer;};

			int *getCurrentPointer(){ return this->currentPointer;};

			void setCurrentIndex(int currentIndex){ this->currentIndex = currentIndex;};

			int getCurrentIndex(){ return this->currentIndex;};

			void setSize(int size){this->size = size;};

			int getSize(){ return this->size;};

			arr(){
				this->setBasePointer(new int);
				this->setCurrentPointer(this->getBasePointer());
				this->setCurrentIndex(0);
				this->setSize(100);
				
			}

			arr(int SIZE = 100){
				this->setBasePointer(new int);
				this->setCurrentPointer(this->getBasePointer());
				this->setCurrentIndex(0);
				this->setSize(SIZE);
			};

			arr(int *address, int SIZE){
			
				this->setBasePointer(address);
				this->setCurrentPointer(this->getBasePointer());
				this->setCurrentIndex(0);
				this->setSize(SIZE);
			}

			arr(int *address){

					this->setBasePointer(address);
					this->setCurrentPointer(this->getBasePointer());
					this->setCurrentIndex(0);
					this->setSize(100);
			}


			void insertElement(int index, int value){

				if(index < 0 || index >= this->getSize()){throw std::out_of_range("Invalid index access");}

				*(this->getBasePointer() + index) = value;
			};

			int searchElement(int index){

				if(index < 0 || index >= this->getSize()){throw std::out_of_range("Invalid index access");}

							if(this->getBasePointer() + index == nullptr){
								
								throw std::runtime_error("Accessing unused or invalid memory location");
							};
						return *(this->getBasePointer() + index);	
			};


			void updateElement(int index,int value){
			


				if(index < 0 || index >= this->getSize()){throw std::out_of_range("Invalid index access");}

				if(this->getBasePointer() + index == nullptr){
								
					throw std::runtime_error("Accessing unused or invalid memory location");	
				}

				*(this->getBasePointer() + index) = value;
			};


			void copyArray(int *copyPointer,int size){

				if(size < 0 || size > this->getSize() || copyPointer == nullptr ){throw std::out_of_range("Invalid index access");}

				int *currentPointer = this->getBasePointer();

				int *currentCopyPointer = copyPointer;

				for(int i=0; i < this->getSize();i++)
				{
					*currentCopyPointer = *currentPointer;
					currentPointer + 1;
					currentCopyPointer = currentCopyPointer + 1;
				};



			};


			void deleteArray(){
				if(this->getBasePointer() == nullptr){throw std::out_of_range("Invalid index access");}

				int *currentPointer = this->getBasePointer();

				int *deletePointer = this->getBasePointer();

				for(int i=0; i < this->getSize();i++){

					delete deletePointer;
					currentPointer + 1;
					deletePointer = currentPointer;
				}
	
				delete currentPointer;
				delete deletePointer;
			};

			void printArray(){
				if(this->getBasePointer() == nullptr){throw std::out_of_range("Invalid index access");}

				this->setCurrentPointer(this->getBasePointer());

				cout << "The list: " << endl;

				for(int i=0; i < this->getSize();i++){
				
					cout << i << " " << *this->getCurrentPointer() << " " << endl;
					this->setCurrentPointer(this->getCurrentPointer() + 1);
				}
			
				cout << endl;
			};

			void fillArray(){
				if(this->getBasePointer() == nullptr){throw std::out_of_range("Invalid index access");}

				this->setCurrentPointer(this->getBasePointer());

				for(int i=0; i < this->getSize();i++){
				
					*this->getCurrentPointer() = i;
					this->setCurrentPointer(this->getCurrentPointer() + 1);
				}
			};
};


int main(){

	arr array1(10);

	cout << "============================== test 1 ========================" << endl;

	array1.insertElement(0,31);
	array1.insertElement(4,-10);

	array1.printArray();

	cout << "============================== test 2 ========================" << endl;
	
	array1.insertElement(3,333333);
	array1.insertElement(5,901);

	array1.printArray();

	cout << "============================== test 3 ========================" << endl;

	int index = 3;
	cout << "With index " << index << ": " << array1.searchElement(index) << endl;


	cout << "Enter the index of element you are ask about: ";
	cin >> index;

	cout << "With index " << index << ": " << array1.searchElement(index) << endl;

	cout << "Enter the index of element you are ask about: ";
	cin >> index;

	cout << "With index " << index << ": " << array1.searchElement(index) << endl;

	array1.printArray();

	cout << "============================== test 4 ========================" << endl;

	array1.insertElement(0,49);

	cout << "Enter the index of element you are ask about: ";
	cin >> index;

	cout << "With index " << index << ": " << array1.searchElement(index) << endl;

	array1.printArray();

	cout << "============================== test 5 ========================" << endl;

	array1.insertElement(1,345);
	array1.printArray();
	array1.insertElement(2,909090);
	array1.printArray();
	array1.insertElement(6,980);
	array1.printArray();
	array1.insertElement(7,12234);
	array1.printArray();
	array1.insertElement(8,321100);
	array1.printArray();
	array1.insertElement(9,921199);
	array1.printArray();

	cout << "============================== test 6 ========================" << endl;

	arr array2(10);

	array2.copyArray(array1.getBasePointer(),10);

	array2.printArray();	


	
 
	
return 0;

};