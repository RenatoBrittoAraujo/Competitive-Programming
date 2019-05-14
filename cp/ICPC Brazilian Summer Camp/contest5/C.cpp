#include <bits/stdc++.h>

using namespace std;

#define INF 2000000
int n,m,a,b;
char op;

using ii = pair<int,int>;
int w;

vector<ii> G[100010];
bitset<100010> vis,tree;
map<ii,int> calc;

int bfs(int iv,int de){
	vis.reset();
	queue<ii> tv;
	tv.push(ii(iv,0));
	while(!tv.empty()){
		ii u = tv.front();
		tv.pop();
		calc[ii(iv,u.first)]=u.second;
		calc[ii(u.first,iv)]=-u.second;
		vis[u.first]=1;
		for(auto v: G[u.first]){
			if(v.first==de){
				int sum = v.second+u.second;
				calc[ii(iv,de)]=sum;
				calc[ii(de,iv)]=-sum;
				return sum;
			}
			if(!vis[v.first])tv.push(ii(v.first,u.second+v.second));
		}	 	
	}
	return INF;
}

int main(){
	while(scanf("%d%d",&n,&m),bool(m+n)){
		tree.reset();
		for(int i=0;i<m;i++){
			scanf(" %c",&op);
			if(op=='!'){
				scanf("%d%d%d",&a,&b,&w);
				G[a].push_back(ii(b,w));
				G[b].push_back(ii(a,-w));
				tree[a]=1;tree[b]=1;
			}else{
				scanf("%d%d",&a,&b);
				if(tree[a]&&tree[b]){
					if(calc.find(ii(a,b))!=calc.end()){printf("%d\n",calc[ii(a,b)]);continue;}
					else{
						int bfsr = bfs(a,b);	
						if(bfsr==INF)printf("UNKNOWN\n");
						else printf("%d\n",bfsr);
					}
				}else printf("UNKNOWN\n");
			}

		}
		for(int i=0;i<=n;i++)G[i].clear();
	}
}	

