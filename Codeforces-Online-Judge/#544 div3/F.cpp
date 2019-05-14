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

int p[2*N];

int find(int u){
	if(u == p[u])return u;	
	else return find(p[u]);
}

void join(int a,int b){
	a = find(a);
	b = find(b);
	if(a == b)return;
	if(b<a)swap(a,b);
	p[b] = a;	
}

bool same(int a,int b){
	return find(a) == find(b);
}

vi G[2*N];

int n,m,d;

vector<pair<int,int>>	sel;
set<ii> edl;

int cnt;

vector<ii> w;

void mst(){
	
	for(auto v: edl){
		if(v.ff == 1 or v.ss == 1)continue;
		if(!same(v.ff,v.ss)){
			sel.pb(v);
			join(v.ff,v.ss);
			cnt++;
		}else{
			w.pb(v);
		}
	}

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m>>d;
	int a,b;
	
	loop(i,0,n+1)p[i] = i;
	
	vector<ii> vn,v1;

	loop(i,0,m){		
		cin>>a>>b;
		if(a == 1 or b == 1)v1.pb(ii(a,b));
		else vn.pb(ii(a,b));
	}

	if(d > len(v1)){cout<<"NO\n";return 0;}

	for(auto v: vn)edl.insert(v);
	
	mst();
	
	cnt = 0;
	
	edl.clear();

	for(auto v: v1)edl.insert(v);
	
	w.clear();
	
	mst();

	if(cnt > d){cout<<"NO\n";return 0;}
	
	int p = 0;
	while(d--)sel.pb(w[p++]);
	
	for(auto v: vn)edl.insert(v);
	
	mst();
	
	cout<<"YES\n";	
	loop(i,0,len(sel)){
		cout<<sel[i].ff<<' '<<sel[i].ss<<endl;
	}

	return 0;
}
