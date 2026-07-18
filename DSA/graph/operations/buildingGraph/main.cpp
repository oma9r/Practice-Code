#include "graph.h"






int main(){


    unGraph g(5);

	cout << "initlization graph: " << endl;

    g.printGraph();

	cout << "================== " << endl;

    int tempIndex = 0;

	cout << "add some edges: " << endl;


    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);


    g.printGraph();


	cout << "================== " << endl;

	cout << "make some connected check: " << endl;


    if(g.isConnected(0,1,tempIndex))
        cout<<"Connected! between 0 and 1"<<endl;
    else
        cout<<"Not Connected! between 0 and 1"<<endl;


    if(g.isConnected(0,3,tempIndex))
        cout<<"Connected! between 0 and 3"<<endl;
    else
        cout<<"Not Connected! between 0 and 3"<<endl;


	cout << "================== " << endl;


	cout << "remove elements: " << endl;


    g.removeEdge(0,1);
    g.removeEdge(0,3);

    g.printGraph();


	
	cout << "================== " << endl;

	cout << "the size of adj: " << g.Adj.size() << endl; 


	cout << "add vertex and add some edges: " << endl;

    g.addVertex();

    	cout << "the size of adj: " << g.Adj.size() << endl; 


    g.addEdge(2,5);
    g.addEdge(5,3);



	cout << "the size of adj: " << g.Adj.size() << endl;


    g.printGraph();


	cout << "================== " << endl;


    if(g.isConnected(5,3,tempIndex))
        cout<<"Connected!"<<endl;





    cout << "the number of Edges: " << g.getNumberOfEdges() << endl;

    
    cout << "the number of Vertices: " << g.getNumberOfVertices() << endl;


    return 0;
}