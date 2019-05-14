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

vi g[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	int p1 = 0,p2 = 0,x;
	loop(i,0,2*n)cin>>x,g[x].pb(i);
	int v = 0;
	ll st = 0;
	while(v!=n){
		if(p1<=p2)
			st+=abs(g[v+1][0]-p1)+abs(g[v+1][1]-p2),
			p2 = g[v+1][1],p1 = g[v+1][0];
		else
			st+=abs(g[v+1][0]-p2)+abs(g[v+1][1]-p1),
			p2 = g[v+1][0],p1 = g[v+1][1];
		v++;
	}
	cout<<st<<endl;
	return 0;
}
