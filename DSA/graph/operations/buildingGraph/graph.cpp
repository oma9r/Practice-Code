#include "graph.h"


//====================================================
//                  Graph
//====================================================

Graph::Graph(int vertices){

    V = vertices;
    Adj.resize(V);
    E = 0;

    for(int i = 0; i < V; i++){

        Adj[i].resize(1);
        Adj[i][0] = i;

    }

}


void Graph::addVertex(){

    ++V;
    this->Adj.resize(V);
    this->Adj[V-1].resize(1);
    this->Adj[V-1][0] = V-1;

}


bool Graph::isConnected(int u, int v, int &index){

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





//====================================================
//                  unGraph
//====================================================

unGraph::unGraph(int vertices)
    : Graph(vertices){}


void unGraph::addEdge(int u, int v){

    int tempIndex = 0;

    if(isConnected(u, v, tempIndex)){

        cout << "they are already connected!";

    }

    else{

        this->Adj[u].push_back(v);

    }


    if(isConnected(v, u, tempIndex)){

        cout << "they are already connected!";

    }

    else{

        this->Adj[v].push_back(u);

    }

}


int unGraph::getNumberOfEdges(){

    if(E > 0)
        return E;

    this->E = 0;

    int tempIndex = 0;

    for(int i = 0; i < this->Adj.size(); i++){

        for(int j = 0; j < this->Adj[i].size(); j++){

            if(!isConnected(i, j, tempIndex) || !isConnected(j, i, tempIndex))
                E += 1;

        }

    }

    return E;

}

void unGraph::removeEdge(int u, int v){

    int index = 0;

    if(this->isConnected(u, v, index)){

        this->Adj[u].erase(Adj[u].begin() + index);
	this->Adj[v].erase(Adj[v].begin() + index);

    }

    else{

        cout << "there's no connection between "
             << u << " and " << v << endl;

    }

}

int unGraph::getDegree(int u){

	return this->Adj[u].size();

}



//====================================================
//                  dGraph
//====================================================

dGraph::dGraph(int vertices)
    : Graph(vertices){}


void dGraph::addEdge(int u, int v){

    int tempIndex = 0;

    if(isConnected(u, v, tempIndex)){

        cout << "they are already connected!"<<endl;
        return;

    }

    Adj[u].push_back(v);

}


int dGraph::getNumberOfEdges(){

    if(E > 0)
        return E;

    this->E = 0;

    for(int i = 0; i < this->Adj.size(); i++){

        E += Adj[i].size() - 1;

    }

    return E;

}

void dGraph::removeEdge(int u, int v){

    int index = 0;

    if(this->isConnected(u, v, index)){

        this->Adj[u].erase(Adj[u].begin() + index);

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

	return degree + this->Adj[u].size()-1;

}

int dGraph::getInDegree(int u){


	return this->getDegree(u) - getOutDegree(u);


}

int dGraph::getOutDegree(int u){

	return this->Adj[u].size()-1;


}