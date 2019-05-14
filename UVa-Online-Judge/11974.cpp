#include <bits/stdc++.h>

using namespace std;

int c,n,m,bt;

int tlgs[101];

int dist[(1<<16)];

int bfs(int a){
	dist[a]=0;
	queue<int> tv;
	tv.push(a);
	while(!tv.empty()){
		int u = tv.front();tv.pop();
		for(int i=0;i<m;i++){
			int v = u^tlgs[i];
			if(dist[v]==-1){
				tv.push(v);
				dist[v]=dist[u]+1;
			}else if(dist[v]>dist[u]+1)dist[v]=dist[u]+1;
		}
	}
	return dist[0];
}

int main(){
	scanf("%d",&c);
	for(int ca=1;ca<=c;ca++){
		memset(dist,-1,sizeof dist);
		memset(tlgs,0,sizeof tlgs);
		scanf("%d%d",&n,&m);
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++){
				scanf("%d",&bt);if(bt)tlgs[i]|=(1<<j);}
		int v = bfs((1<<n)-1);
		printf("Case %d: ",ca);
		if(v==-1)printf("IMPOSSIBLE\n");
		else printf("%d\n",v);
	}
	return 0;
}
