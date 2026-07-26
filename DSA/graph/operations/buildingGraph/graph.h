#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>

using namespace std;


class Graph{

    public:

        int V;
        int E;
        vector<vector<int>> Adj;

	Graph();

        Graph(int vertices);

        virtual void addEdge(int u,int v) = 0;

        void addVertex();

        bool isAdjacent(int u,int v,int &index);

        virtual void removeEdge(int u,int v) = 0;

        int getNumberOfVertices();

        int getNumberOfEdges();

	bool isEmpty();

        void printGraph();

	void getAdjacentVertices(int);

	virtual int getDegree(int) = 0;

};



class unGraph : public Graph{

    public:

	unGraph();

        unGraph(int vertices);

        void addEdge(int u,int v) override;

	void removeEdge(int u,int v) override;

	int getDegree(int) override;

};



class dGraph : public Graph{

    public:

	dGraph();

        dGraph(int vertices);

        void addEdge(int u,int v) override;

	void removeEdge(int u,int v) override;

	int getDegree(int) override;

	int getInDegree(int);

	int getOutDegree(int);

};


#endif