#include "graph.h"






int main(){


    unGraph g(5);

	cout << "initlization graph: " << endl;

    g.printGraph();

	cout << "================== " << endl;

    int tempIndex = 0;

	cout << "add some edges: " << endl;


	 if(!g.isEmpty()){

		cout << "line 1: the graph is empty."<<endl;

		}

	else{
		cout << "lin1: the graph is not empty!." << endl;
		}

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);


    g.printGraph();


	cout << "================== " << endl;

	cout << "make some connected check: " << endl;


    if(g.isAdjacent(0,1,tempIndex))
        cout<<"Connected! between 0 and 1"<<endl;
    else
        cout<<"Not Connected! between 0 and 1"<<endl;


    if(g.isAdjacent(0,3,tempIndex))
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
	cout << g.Adj[g.V-1][0] << endl;

	cout << "line 2: track the change of the graph adding vertex: " << endl;
	g.printGraph();



    g.addEdge(2,5);
    g.addEdge(5,3);



	//cout << "the size of adj: " << g.Adj.size() << endl;


    //g.printGraph();


	cout << "================== " << endl;


    if(g.isAdjacent(5,3,tempIndex))
        cout<<"Connected!"<<endl;



	g.printGraph();

	g.getAdjacentVertices(3);
	
	cout << "the degree of 3: " << g.getDegree(3) << endl;





    cout << "the number of Edges: " << g.getNumberOfEdges() << endl;

    
    cout << "the number of Vertices: " << g.getNumberOfVertices() << endl;

 
    cout << "the testing of un Graph" << endl;

    cout << "=============================================================" << endl;


    dGraph dg(6);

    dg.addEdge(1,2);

    dg.addEdge(2,1);

    dg.addEdge(1,5);

    dg.addEdge(3,4);

    dg.addEdge(4,2);


    //dg.addEdge(

    dg.printGraph();

    cout << "The degree of 1 is " << dg.getDegree(1) << endl;
    cout << "The degree of 5 is " << dg.getDegree(5) << endl;

    dg.printGraph();


    dg.addEdge(5,3);
    dg.addEdge(5,2);
    dg.addEdge(5,4);
    dg.addEdge(4,1);

    cout << "The degree of 5 is " << dg.getDegree(5) << endl;
    cout << "The degree of 4 is " << dg.getDegree(4) << endl;

    dg.printGraph();


	cout << "the general degree of 1: " << dg.getDegree(1) << endl;


	cout << "The in degree of 1 is: " << dg.getInDegree(1) << endl;

	cout << "The out degree of 1 is: " << dg.getOutDegree(1) << endl;

   dg.printGraph();

	cout << "the general degree of 5: " << dg.getDegree(5) << endl;

	cout << "The in degree of 5 is: " << dg.getInDegree(5) << endl;

	cout << "The out degree of 5 is: " << dg.getOutDegree(5) << endl;


	unGraph ug;

	ug.addVertex();

	ug.addVertex();

	ug.addEdge(0,1);

	ug.printGraph();



    return 0;
}