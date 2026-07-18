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

    V = V + 1;
    this->Adj.resize(V);
    int index = V-1;
    this->Adj[index][0] = index;

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


void Graph::printGraph(){

    for(int i = 0; i < this->V; i++){

       // if(this->Adj[i].size() == 1) continue;

        for(int j = 0; j < this->Adj[i].size(); j++){

            if(j == this->Adj[i].size() - 1){

                cout << this->Adj[i][j];
                continue;

            }

            cout << this->Adj[i][j] << " -> ";

        }

        cout << endl;

    }

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



//====================================================
//                  dGraph
//====================================================

dGraph::dGraph(int vertices)
    : Graph(vertices){}


void dGraph::addEdge(int u, int v){

    int tempIndex = 0;

    if(isConnected(u, v, tempIndex)){

        cout << "they are already connected!";
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