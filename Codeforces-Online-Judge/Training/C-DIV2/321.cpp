
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()
#define allv(a) (a).begin(),(a).end()
using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

int cats[N];
vi G[N];
int sum=0;
int n,m;
bool vis[N];

void dfs(int u,int c){
	vis[u]=1;
	if(cats[u])c+=cats[u];
	else c=0;
	if(c>m)return;
	if(len(G[u])==1 and u!=0)sum++;
	for(auto v: G[u]){
		if(!vis[v])
			dfs(v,c);
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int a,b;
	cin>>n>>m;
	loop(i,0,n)cin>>cats[i];
	loop(i,0,n-1){
		cin>>a>>b;
		a--;b--;
		G[a].pb(b);
		G[b].pb(a);
	}	
	dfs(0,0);
	cout<<sum<<endl;
	return 0;
}
