
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define mp make_pair
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
const int N = 5e3+10;

int n,m;
ll t;

vector<ii> G[N];

int mx = 0;

int p[N];

bool dfs(int u, int vis, ll no){
	vis++;
	if(u == n){
		//cout<<"REACHED WITH "<<no<<endl;
		if(vis > mx and no <= t){
			mx = vis;
			return 1;
		}
		else return 0;
	}
	if(no > t)return 0;
	bool ret = 0;
	for(auto v: G[u])
		if(dfs(v.ff, vis, no + v.ss))
			p[v.ff] = u,
			ret = 1;
	return ret;

}

int main(){
	cin>>n>>m>>t;
	int a,b,c;
	
	p[1] = 1;
		
	loop(i,0,m)cin>>a>>b>>c,G[a].eb(b,c);

	dfs(1, 0, 0);

	cout<<mx<<endl;
	int pos = n;
	vi rec;
	int cnt = 0;
	do{
		cnt++;
		if(cnt > 5000)break;
		rec.pb(pos);
		pos=p[pos];
	}while(pos!=1);
	cout<<1<<' ';
	for(int i = len(rec)-1; i>=0;i--)
		cout<<rec[i]<<' ';cout<<endl;
	return 0;
}
