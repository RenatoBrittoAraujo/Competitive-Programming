#include<bits/stdc++.h> 
using namespace std; 
  
class Graph 
{ 
    int V;    // No. of vertices 
    list<int> *adj;    // Pointer to an array containing adjacency lists 
    bool isCyclicUtil(int v, bool visited[], bool *rs);  // used by isCyclic() 
public: 
    Graph(int V);   // Constructor 
    void addEdge(int v, int w);   // to add an edge to graph 
    bool isCyclic();    // returns true if there is a cycle in this graph 
}; 
  
Graph::Graph(int V) 
{ 	
	//cout<<"GRAPH\n";
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); // Add w to v’s list. 
} 
  
// This function is a variation of DFSUytil() in https://www.geeksforgeeks.org/archives/18212 
bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack) 
{ 
	//cout<<"IS CYCLIC UNTIL\n";
    if(visited[v] == false) 
    { 
        // Mark the current node as visited and part of recursion stack 
        visited[v] = true; 
        recStack[v] = true; 
  
        // Recur for all the vertices adjacent to this vertex 
        list<int>::iterator i; 
        for(i = adj[v].begin(); i != adj[v].end(); ++i) 
        { 
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) ) 
                return true; 
            else if (recStack[*i]) 
                return true; 
        } 
  
    } 
    recStack[v] = false;  // remove the vertex from recursion stack 
    return false; 
} 
  
// Returns true if the graph contains a cycle, else false. 
// This function is a variation of DFS() in https://www.geeksforgeeks.org/archives/18212 
bool Graph::isCyclic() 
{ 
	//cout<<"IS CYCLIC\n";
    // Mark all the vertices as not visited and not part of recursion 
    // stack 
    bool *visited = new bool[V]; 
    bool *recStack = new bool[V]; 
    for(int i = 0; i < V; i++) 
    { 
        visited[i] = false; 
        recStack[i] = false; 
    } 
  
    // Call the recursive helper function to detect cycle in different 
    // DFS trees 
    for(int i = 1; i < V; i++) 
        if (isCyclicUtil(i, visited, recStack)) 
            return true; 
  
    return false; 
} 
  
int main() 
{ 
    int t,n,m,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		Graph g(n+1);
		for(int i=0;i<m;i++){
			scanf("%d%d",&a,&b);
			g.addEdge(a,b);
		}
		if(g.isCyclic())printf("SIM\n");
		else printf("NAO\n");
	}
    return 0; 
} 
