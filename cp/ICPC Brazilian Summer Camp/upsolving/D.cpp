#include <bits/stdc++.h>

using namespace std;

int n,a,b;

double ans=0;

vector<int> G[100010];

bool vis[100010];

void dfs(int u,double d,double prob){
	vis[u]=1;
	bool f=0;
	prob *= 1.0/double(G[u].size()-(u==1||G[u].size()==1?0:1));
	for(auto v: G[u]){
		if(!vis[v])dfs(v,d+1,prob),f=1;
	}
	if(!f){ans+=d*prob;}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		scanf("%d%d",&a,&b);
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dfs(1,0,1);
	printf("%.12f \n",ans);
}	
