#include "graph.h"
#include <queue>


void BFS(Graph &g, int start){

	for(int i=0; i < g.vertices.size();i++){

		this->vertices[i]->parent = -1;
		this->vertices[i]->color = 0;   /// 0 white
	}

	this->vertices[start]->color = 1;
	this->vertices[start]->distance = 0;
	
	queue <Vertex> q;

	q.push(vertices[start]);

	Vertex current;

	while(!q.empty()){

		current = q.top();
		q.pop();

			for(int j=1; j < g.Adj[current->value].size();j++){

				if(vertices[Adj[current->value][j]]->color == 0){
					vertices[Adj[current->value][j]]->color = 1;
					++vertices[Adj[current->value][j]]->distance;
					vertices[Adj[current->value][j]]->parent = current->value;
					q.push(vertices[Adj[current->value][j]]);
				}
				

			}
		vertices[Adj[current->value][j]]

	}




}













int main()
{
        


        


        return 0;
}
