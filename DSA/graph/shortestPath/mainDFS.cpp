#include "graph.h"

const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;

void DFSV(Graph &g, int u, int &time){

	time = time + 1;

	g.vertices[u].dTime = time;

	g.vertices[u].color = GRAY;

	for(int i =1; i < g.Adj[u].size();i++){

		if(g.vertices[g.Adj[u][i]].color == WHITE){

			g.vertices[g.Adj[u][i]].parent = u;
			DFSV(g,g.vertices[g.Adj[u][i]].value,time); 	
		}
	}

	g.vertices[u].color = BLACK;
	time = time + 1;
	g.vertices[u].fTime = time;

}



void DFS(Graph &g, int start = 0){
	
	int time = 0;

	for(int i=start; i < g.vertices.size();i++){
	
		if(g.vertices[i].color == WHITE){
		
			DFSV(g,i,time);
		} 

	}
}




int main()
{
	dGraph dg(7);

	dg.addEdge(1,2);
	dg.addEdge(1,3);
	dg.addEdge(2,4);
	dg.addEdge(3,2);
	dg.addEdge(4,3);
	dg.addEdge(5,4);
	dg.addEdge(5,6);
	dg.addEdge(6,6);

	dg.printGraph();

	cout << "====================== using DFS ===================" << endl;

	DFS(dg,1);

	dg.printEachVertex();


	
	

	
	

        return 0;
}
