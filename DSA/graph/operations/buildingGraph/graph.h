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

        Graph(int vertices);

        virtual void addEdge(int u,int v) = 0;

        void addVertex();

        bool isConnected(int u,int v,int &index);

        virtual void removeEdge(int u,int v) = 0;

        int getNumberOfVertices();

        virtual int getNumberOfEdges() = 0;

        void printGraph();

};



class unGraph : public Graph{

    public:

        unGraph(int vertices);

        void addEdge(int u,int v) override;

        int getNumberOfEdges() override;

	void removeEdge(int u,int v) override;

};



class dGraph : public Graph{

    public:

        dGraph(int vertices);

        void addEdge(int u,int v) override;

        int getNumberOfEdges() override;

	void removeEdge(int u,int v) override;

};


#endif