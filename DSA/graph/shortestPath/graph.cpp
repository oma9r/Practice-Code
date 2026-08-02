#include "graph.h"


//====================================================
//                  Graph
//====================================================

Graph::Graph(){

	V = 0;
	Adj.resize(0);
        vertices.resize(0);
	E = 0;
}

Graph::Graph(int vertices1){

    V = vertices1;
    Adj.resize(V);
    vertices.resize(V);
    E = 0;

    for(int i = 0; i < V; i++){

        Adj[i].resize(1);
        Adj[i][0] = i;
	vertices[i].value = i;
	vertices[i].parent = -1;
	vertices[i].color = 0; // 0 white, 1 gray, 2 black.
	

    }

}


void Graph::addVertex(){

    ++V;
    this->Adj.resize(V);
    this->Adj[V-1].resize(1);
    this->Adj[V-1][0] = V-1;


    this->vertices.resize(V);
    this->vertices[V-1].value = V-1;
    this->vertices[V-1].parent = -1;
    this->vertices[V-1].color = 0;


}


bool Graph::isAdjacent(int u, int v, int &index){

    for(int i = 0; i < this->Adj[u].size(); i++){

        if(Adj[u][i] == v){

            index = i;
            return true;

        }

    }

    return false;

}





int Graph::getNumberOfVertices(){

    return this->V;

}

bool Graph::isEmpty(){

	return (this->getNumberOfEdges() == 0);

}


void Graph::printGraph(){

    for(int i = 0; i < this->V; i++){

       this->getAdjacentVertices(i);
    }

}

void Graph::getAdjacentVertices(int u){


	for(int j = 0; j < this->Adj[u].size(); j++){

            if(j == this->Adj[u].size() - 1){

                cout << this->Adj[u][j];
                continue;

            }

            cout << this->Adj[u][j] << " -> ";

        }

        cout << endl;

}

int Graph::getNumberOfEdges(){

    return E;

}

void Graph::printEachVertex(){

	cout << "The details of each vertex contains: " << endl;
	cout << "V->value: " << endl << "V->parent: " << endl;
	cout << "V->color: " << endl; 
	for(int i=0; i < this->V; i++){

		//cout << i <<"->value: " << this->vertices[i].value <<  endl << 
		// i <<"->parent: "<< this->vertices[i].parent << endl;
		cout << i <<"->color: " << this->vertices[i].color << endl; 		


	}



}





//====================================================
//                  unGraph
//====================================================

unGraph::unGraph(): Graph(){}

unGraph::unGraph(int vertices)
    : Graph(vertices){}


void unGraph::addEdge(int u, int v){

	if(u >= this->Adj.size()){ 
		cout << "Invalid edge adding" << endl;
		return;
	}

    int tempIndex = 0;

    if(isAdjacent(u, v, tempIndex)){

        cout << "they are already connected!";

    }

    else{
		
        	this->Adj[u].push_back(v);

    }

	if(v >= this->Adj.size()){ 
		cout << "Invalid edge adding" << endl;
		return;
	}


    if(isAdjacent(v, u, tempIndex)){

        cout << "they are already connected!";

    }

    else{

		this->Adj[v].push_back(u);


    }
		++E;

}




void unGraph::removeEdge(int u, int v){

    int index = 0;

	if(u >= this->Adj.size()){
		cout << "invalid input delete edge" << endl;
		return;
	}

	if(v >= this->Adj.size()){
		cout << "invalid input delete edge" << endl;
		return;
	}


    if(this->isAdjacent(u, v, index)){

        this->Adj[u].erase(Adj[u].begin() + index);
	this->Adj[v].erase(Adj[v].begin() + index);
	--E;

    }

    else{

        cout << "there's no connection between "
             << u << " and " << v << endl;

    }

}

int unGraph::getDegree(int u){

	return this->Adj[u].size()-1;

}



//====================================================
//                  dGraph
//====================================================

dGraph::dGraph() : Graph(){}

dGraph::dGraph(int vertices)
    : Graph(vertices){}


void dGraph::addEdge(int u, int v){

	//if(u >= this->Adj.size()){ 
		//cout << "Invalid edge adding" << endl;
		//return;
	//}

	//if(v >= this->Adj[u].size()){
		//cout << "Invalid edge adding" << endl;
		//return;
	//}

    int tempIndex = 0;

    if(isAdjacent(u, v, tempIndex)){

        cout << "they are already connected!"<<endl;
        return;

    }

	else

   			Adj[u].push_back(v);
			++E;

}



void dGraph::removeEdge(int u, int v){

    int index = 0;

    if(this->isAdjacent(u, v, index)){

        this->Adj[u].erase(Adj[u].begin() + index);
	--E;

    }

    else{

        cout << "there's no connection between "
             << u << " and " << v << endl;

    }

}



int dGraph::getDegree(int u){

	int degree = 0;

	for(int i=0; i < this->Adj.size();i++){

		for(int j = 1; j < this->Adj[i].size();j++){

			if(Adj[i][j] == u) ++degree;
		}
	}

	//cout << "Inner: the degree of " << u << " is: " << degree << endl;
	//cout << "the size of u: " <<  Adj[u].size() << endl;

	return degree + this->Adj[u].size()-2;

}

int dGraph::getInDegree(int u){


	return this->getDegree(u) - getOutDegree(u);


}

int dGraph::getOutDegree(int u){

	return this->Adj[u].size()-1;


}