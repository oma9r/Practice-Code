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

			///////////////////////////////////////////////////////////////////////////////////////////////void setCurrentIndex

			void setSize(int size){this->size = size;};

			int getSize(){ return this->size;};

			arr(){
				this->setBasePointer(new int);
				this->setSize(100);
			}

			arr(int SIZE = 100){
				this->setBasePointer(new int);
				this->setSize(SIZE);
			};

			arr(int *address, int SIZE){
			
				this->setBasePointer(address);
				this->setSize(SIZE);
			}

			arr(int *address){

					this->setBasePointer(address);
					this->setSize(100);
			}


			void insertElement(int index, int value){

				int *currentPointerInsert = this->getCurrentPointer();

				for(int i=0; i < this->getSize();i++)
				{
					if(index > 


			













};