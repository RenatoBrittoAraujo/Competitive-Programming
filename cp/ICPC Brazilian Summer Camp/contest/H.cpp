#include <bits/stdc++.h>
using namespace std;
using ii = pair<int,int>;
using vii = vector<pair<int,ii>>;
using vi = vector<int>;

int n,m,a,b,l,c;

#define inf 1000000

vii edgel;
vector<ii> G[10010];
int costs[10010][10010];

int p[10010];

void dijkstra(int s){
	vi dist(n,inf);
	dist[s]=0;
	priority_queue<ii,vector<ii>,greater<ii>> pq;pq.push(ii(0,s));
	while(!pq.empty()){
		ii front = pq.top();pq.pop();
		int d = front.first,u=front.second;
		if(d>dist[u])continue;
		for(int i=0;i<G[u].size();i++){
			ii v = G[u][i];
			if(dist[u]+v.second<dist[v.first]){
				dist[v.first] = dist[u]+v.second;
				pq.push(ii(dist[v.first],v.first));
				p[u]=v.second;
}}}}


int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b>>l>>c;
		G[a].push_back(ii(l,b));
		G[b].push_back(ii(l,a));
		costs[a][b]=c;
		costs[b][a]=c;
	}
	for(int i=1;i<=n;i++){
		dijkstra(i);
		int u=1;
		while(1){
			cout<<"parent = "<<p[u]<<" child = "<<u<<endl;
			edgel.push_back(make_pair(costs[u][p[u]],ii(u,p[u])));
			u=p[u];
			if(u==i)break;
		}
	}
	cout<<"Manter:\n";
	for(int i=0;i<edgel.size();i++)cout<<edgel[i].first<<' '<<edgel[i].second.first<<' '<<edgel[i].second.second<<endl;
	return 0;
}

