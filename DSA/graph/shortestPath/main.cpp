#include "graph.h"



int main()
{
	unGraph ug(16);

	ug.addEdge(1,2);
	ug.addEdge(1,12);
	//ug.addEdge(1,9);
	ug.addEdge(2,12);
	ug.addEdge(2,3);
	//ug.addEdge(9,7);
	//ug.addEdge(9,5);
	ug.addEdge(3,12);
	ug.addEdge(3,11);
	ug.addEdge(12,4);
	ug.addEdge(12,5);
	ug.addEdge(5,6);
	ug.addEdge(5,10);
	ug.addEdge(11,4);
	ug.addEdge(11,13);
	ug.addEdge(4,10);
	ug.addEdge(10,8);

	
	

	
	

        return 0;
}
