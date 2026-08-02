#include "graph.h"
#include <queue>


void BFS(Graph &g, int start){

	for(int i=0; i < g.vertices.size();i++){

		g.vertices[i].parent = -1;
		g.vertices[i].color = 0;   /// 0 white
	}

	g.vertices[start].color = 1;
	g.vertices[start].distance = 0;
	
	queue <Vertex> q;

	q.push(g.vertices[start]);

	Vertex current;

	while(!q.empty()){

		current = q.front();
		q.pop();

			for(int j=1; j < g.Adj[current.value].size();j++){

				if(g.vertices[g.Adj[current.value][j]].color == 0){
					g.vertices[g.Adj[current.value][j]].color = 1; // gray
					++g.vertices[g.Adj[current.value][j]].distance;
					g.vertices[g.Adj[current.value][j]].parent = current.value;
					q.push(g.vertices[g.Adj[current.value][j]]);
				}
				

			}
		
		//cout << vertices[current->value]->value << " visited!" << endl;
		g.vertices[current.value].color = 2;

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
