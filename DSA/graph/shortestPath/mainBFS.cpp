#include "graph.h"
#include <queue>

const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;


void BFS(Graph &g, int start){

	bool check = false;
	for(int i=0; i < g.vertices.size();i++){
		
		if(start == g.vertices[i].value){ check = true; break; }

	}

	if(!check){ cout << "the start value is in valid" << endl; return; }

	for(int i=0; i < g.vertices.size();i++){

		g.vertices[i].parent = -1;
		g.vertices[i].color = WHITE;   /// 0 white
	}

	g.vertices[start].color = GRAY;
	g.vertices[start].distance = 0;
	
	queue <int> q;

	q.push(g.vertices[start].value);

	int current;

	while(!q.empty()){

		current = q.front();
		q.pop();

			for(int j=1; j < g.Adj[current].size();j++){

				if(g.vertices[g.Adj[current][j]].color == WHITE){
					g.vertices[g.Adj[current][j]].color = GRAY; // gray
					g.vertices[g.Adj[current][j]].distance = g.vertices[current].distance + 1;
					g.vertices[g.Adj[current][j]].parent = current;
					q.push(g.vertices[g.Adj[current][j]].value);
				}
				

			}
		

		g.vertices[current].color = BLACK;

	}

}





int main()
{
	unGraph ug(13);

	ug.addEdge(1,2);
	ug.addEdge(1,12);
	ug.addEdge(1,9);
	ug.addEdge(2,12);
	ug.addEdge(2,3);
	ug.addEdge(9,7);
	ug.addEdge(9,5);
	ug.addEdge(3,12);
	ug.addEdge(3,11);
	ug.addEdge(12,4);
	ug.addEdge(12,5);
	ug.addEdge(5,6);
	ug.addEdge(5,10);
	ug.addEdge(11,4);
	ug.addEdge(11,13);
	ug.addEdge(4,10);
	ug.addEdge(10,8);

	
	BFS(ug,1);

	ug.printEachVertex();
	

        return 0;
}
