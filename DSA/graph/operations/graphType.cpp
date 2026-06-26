#include <iostream>
#include <list>
#include <fstream>
using namespace std;

class graphType{

	public:
		bool isEmpty(){
				return (gSize == 0);
		}

		void createGraph(){
					ifstream infile("file1.txt");
					//char fileName[50] = "file1.txt";

					int vertex;
					int adjacentVertex;

					if(gSize != 0) clearGraph();

					//cout << "Enter input file name: ";
					//cin >> fileName;
					//cout << endl;

					//infile.open(fileName);

					//if(!infile){cout << "Can't open input file." << endl; return;}

					infile >> gSize;

					for(int index = 0; index < gSize; index++){
					
						infile >> vertex;
						infile >> adjacentVertex;
					
						while(adjacentVertex != -999){

							graph[vertex].push_back(adjacentVertex);
							infile >> adjacentVertex;					
						}
					}

		}

		void clearGraph(){

					for(int index=0; index < gSize;index++){
					
						while(!graph[index].empty()){
							graph[index].pop_back();
						}

					}
				gSize = 0;
		};


		void printGraph(){

				for(int index=0; index < gSize;index++){
					

					cout << index << " ";
					
						for(auto i : graph[index]){

							cout << i << ", ";
						}
					cout << endl;

					}
		}

		graphType(int size){

			maxSize = size;
			gSize = 0;
			graph = new list<int>[size];
		}
		
		~graphType(){
			
			clearGraph();

		}		





	protected:
			int maxSize;
			int gSize;
			list<int> *graph;

};











int main()
{
		graphType g1(20); // = new graphType(20);

		//char fileName[50] = "file1.txt";

		g1.createGraph();
        


        


        return 0;
}
