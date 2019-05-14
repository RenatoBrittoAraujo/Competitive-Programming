#include <bits/stdc++.h>

using namespace std;

#define MAX_V 1500
define inf 1000000
using vi = vector<int>;

int G[MAX_V][MAX_V];
vi p;
int mf,f,s,t;

void augment(int v,int me){
    if(v==s){
        f=me;
        return;
    }else if(p[v]!=-1){
        augment(p[v],min(me,G[p[v]][v]));
        G[p[v]][v]-=f;
        G[v][p[v]]+=f;
    }
}

int main(){
    	
	//SET 't' (sink), 's' (source), and the 'G' graph to run max flow

        //print graph
        for(int i=0;i<n+2;i++){
            for(int j=0;j<n+2;j++){
                printf(" %5d",G[i][j]);
            }printf("\n");
        }
	
	//MAX FLOW BFS LOOP
        mf=0;
        while(1){
            f=0;
            vi dist(MAX_V, inf);
            dist[s]=0;
            queue<int> q;
            q.push(s);
            p.assign(MAX_V,-1);
            while(!q.empty()){
                int u = q.front();
                q.pop();
                if(t==u)break;
                for(int v=0;v<MAX_V;v++)
                    if(G[u][v]>0&&dist[v]==inf)
                        dist[v]=dist[u]+1,q.push(v),p[v]=u;
            }
            augment(t,inf);
            if(f==0)break;
            mf+=f;
        }

	//mf is the maxflow value, n-mf=mcbm, in a bipartite graph mcbm = mis (max independent set)

    }
    return 0;
}

