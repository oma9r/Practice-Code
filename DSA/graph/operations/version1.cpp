#include <iostream>
#include <vector>
using namespace std;


class Graph{

	public:
		int V;
		int E;
		vector <vector <int>> Adj;

		Graph(int vertices){
			V = vertices;
			Adj.resize(V);
			E = 0;

			for(int i =0; i < V; i++){

				Adj[i].resize(1);
				Adj[i][0] = i;

			}
	

		} 	

		virtual void addEdge(int u, int v);

		void addVertex(){
			++V;
			Adj.resize(V);
		}

		bool isConnected(int u, int v, int &index){

			for(int i=0; i < this->Adj[u].size(); i++){

				if(Adj[u][i] == v){
					index = i;
					return true;
				}

			}

			return false;

		};


		void removeEdge(int u, int v){

			int index = 0;
			if(this->isConnected(u, v, index)){

				this->Adj[u].erase(Adj[u].begin()+index);

			}

			else{
				cout << "there's no connection between " << u << " and " << v << endl;
			}

		

		};


		int getNumberOfVertices(){ return this->V; }

		virtual int getNumberOfEdges();


	void printGraph(){

		for(int i=0; i < this->V;i++){

			if(this->Adj[i].size() == 1) continue;

			for(int j=0; j < this->Adj[i].size(); j++){

				if(j == this->Adj[i].size() - 1){ cout << this->Adj[i][j]; continue;}

				cout << this->Adj[i][j] << " -> "; 

			}

			cout << endl;

		}
	
	};





		

}; // end of class


class unGraph : public Graph{

	public: 
		void addEdge(int u, int v){

			int tempIndex = 0;

			if(isConnected(u, v, tempIndex)){ 

				cout << "they are already connected!";
			} 

			else{
				Adj[u].push_back(v);
			
			}

			if(isConnected(v, u, tempIndex)){ 

				cout << "they are already connected!";
			} 

			else{
				Adj[v].push_back(u);			
			}

		}

			int getNumberOfEdges(){ 

				if(E > 0) return E;

				this->E = 0;
				int tempIndex = 0;

			for(int i=0; i < this->Adj.size();i++){
		
				for(int j=0; j < this->Adj[i].size();i++){

					if(isConnected(i,j,tempIndex)) E += 1;

				}
							
			}
			
			return E;


		}

		

	











}; // end of unGraph


class dGraph : public Graph{


		public: 
			dGraph(int ver){
			
				Graph(ver);
			};

		void addEdge(int u, int v){
			
			int tempIndex = 0;
			if(isConnected(u, v, tempIndex)){ cout << "they are already connected!"; return;} 

			Adj[u].push_back(v);
		
		}

		int getNumberOfEdges(){ 

				if(E > 0) return E;

				this->E = 0;

			for(int i=0; i < this->Adj.size();i++){
		
				E += Adj[i].size() - 1;
							
			}
			
			return E;


		}

	



};





int main(){

	unGraph g(5);

	int tempIndex = 0;

	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,3);

	g.printGraph(g);
        
	if(g.isConnected(0,1,tempIndex)) cout << "Connected! between 0 and 1" << endl; else cout << "Not Connected! between 0 and 1" << endl; 
	if(g.isConnected(0,3,tempIndex)) cout << "Connected! between 0 and 3" << endl; else cout << "Not Connected! between 0 and 3" << endl; 

	g.removeEdge(0,1);
	g.removeEdge(0,3);

	g.addVertex();

	g.addEdge(2,5);

	g.addEdge(5,3);
	if(g.isConnected(5,3,tempIndex)) cout << "Connected!" << endl;


	g.printGraph(g);


        


        return 0;
}
