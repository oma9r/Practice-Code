#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>

using namespace std;

// version1.1 for BFS

class Vertex{

	public:
		int value;
		int parent;
		int color;
		
		int distance;
		int dTime;
		int fTime;
};


class Graph{

    public:

        int V;
        int E;
        vector<vector<int>> Adj;
	vector<Vertex> vertices;

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

	void printEachVertex();

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