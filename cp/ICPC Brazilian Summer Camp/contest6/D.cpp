#include <bits/stdc++.h>

using namespace std;

using ll = long long int;

ll nr=0;
ll sml=0;

vector<int> G[100010];

bool vis[100010]={0};

void dfs(int u,ll d){
	vis[u]=1;
	bool vs=0;
	for(auto v: G[u]){
		if(!vis[v])vs=1,dfs(v,d+1);	
	}
	if(!vs){sml+=d;nr++;}
}
int n,a,b;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		scanf("%d%d",&a,&b);
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dfs(1,0);
	double res= double(sml)/double(nr);
	if(isnan(res))res=0;
	printf("%.12f\n",res);
}
