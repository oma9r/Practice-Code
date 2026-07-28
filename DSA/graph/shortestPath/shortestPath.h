set CPLUS_INCLUDE_PATH=C:\Users\user\OneDrive\Desktop\practice\DSA\graph\operations\buildingGraph
#include "graph.h"
#include <queue>
#include <string>

class bfsGraph : public unGraph{

	public:
		string color;
		int distance;
		int parent;	
};


void BFS(bfsGraph &g, int start){

	for(int i=0; i < g.Adj.size();i++){

		if(start == i) continue;

		g.Adj[i][0]

		

	}





}