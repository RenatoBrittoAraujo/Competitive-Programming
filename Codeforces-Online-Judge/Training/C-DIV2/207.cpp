
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
const int N = 1e5+10;

ll n,m;

ll ans[3*N];
set<ll> s;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m;
	loop(i,1,n+1)s.insert(i);
	ll x,l,r;
	loop(i,0,m){
		cin>>l>>r>>x;
		vi sel;
		for(auto i = s.lower_bound(l); i != s.end() and *i <= r ;i++)
			if(*i != x)sel.pb(*i);
	
		for(auto i = sel.begin(); i != sel.end(); i++){
			ans[*i] = x, s.erase(*i);
		}
	
	}
	
	loop(i,1,n+1)cout<<ans[i]<<' ';
	cout<<endl;
		

	return 0;
}
