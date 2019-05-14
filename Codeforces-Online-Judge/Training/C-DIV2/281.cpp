
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

vector<ll> v;
ll b[2*N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n;
	cin>>n;
	
	ll x;
	loop(i,0,n)cin>>x,v.pb(x);

	ll m;
	cin>>m;
	loop(i,0,m)cin>>b[i];

	sort(b, b + m, greater<ll>());
	sort(allv(v), greater<ll>());

	ll pt = -1LL;
	ll va = 2LL * n, vb = 2LL * m;
	ll mx = va - vb;

	loop(i,0,n){
		if(pt == -1LL and b[0] > v[i] - 1LL)pt = 0LL;
		if(pt > -1LL and pt < m - 1LL and b[pt + 1] > v[i] - 1LL)pt++;

		ll na = (i + 1LL) * 3LL + (n - i - 1LL) * 2LL;
		ll nb = (pt + 1LL) * 3LL + (m - pt - 1LL) * 2LL;
		ll r = na - nb;
		
		if(r > mx or (r == mx and na > va)){
		//	cout<<"V[i] = "<<v[i] - 1<<" pt = "<<pt<<endl;
			mx = r;
			va = na;
			vb = nb;
		}
	}

	cout<<va<<':'<<vb<<endl;

	return 0;
}
