
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

vector<pair<ll,ll>> v;
int n,x;
map<int,int> ma;
ll f[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);	
	cin>>n;
	loop(i,0,n)cin>>x,ma[x]++;
	for(auto it = ma.begin();it!=ma.end();it++)v.pb(ii(it->ff,it->ss));
	n = len(v);
	loop(i,0,n){
		int a = i-1;
		while(a>=0 and v[a].ff+1==v[i].ff)a--;
		if(a==-1)f[i]=v[i].ff*v[i].ss;
		else f[i] = f[a]+v[i].ff*v[i].ss;
		if(i!=0)f[i]=max(f[i],f[i-1]);
	}
	cout<<f[n-1]<<endl;
	return 0;
}
