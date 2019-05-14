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

int p[N];
int sz[N];

int find(int u){
	if(p[u] == u)return u;
	else return find(p[u]);
}

void join(int a,int b){
	a = find(a);
	b=  find(b);
	if(a == b)return;
	if(sz[a] > sz[b])swap(a,b);
	p[a] = b;
	sz[b] += sz[a];
}

bool same(int a,int b){return find(a) == find(b);}

vector<ii> G[N];

bool vis[N];
int root;

void dfs(int u){
	
	vis[u] = 1;

	for(auto v: G[u]){
		if(!vis[v.ff] and !v.ss){
			join(u, v.ff);
			dfs(v.ff);
		}
	}

}

ll fexp(ll b,ll e){
	ll res = 1;
	b = b % mod;
	while(e > 0){
		if(e & 1)res = res * b % mod;

		b = b * b % mod;

		e = e >> 1;

	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	for(int i = 0;i < N;i++)p[i]=i,sz[i]=1;
	int n,k;
	cin>>n>>k;
		
	int a,b,c;
	loop(i,0,n-1){
		cin>>a>>b>>c;
		G[a - 1].eb(b - 1,c);
		G[b - 1].eb(a - 1,c);
	}
	
	loop(i,0,n){
		if(!vis[i]){
			dfs(i);
		}
	}

	//loop(i,0,n)cout<<p[i]<<' ';cout<<endl;

	ll ans = fexp(n,k);

	set<int> toe;

	loop(i,0,n){
		if(toe.count(find(p[i])) == 0){
		
			toe.insert(find(p[i]));
	
		}
	}

	for(auto x: toe){
		ans -= fexp(sz[x], k);
		if(ans < 0)ans += mod; 
	}

	cout<<ans<<endl;

	return 0;
}
