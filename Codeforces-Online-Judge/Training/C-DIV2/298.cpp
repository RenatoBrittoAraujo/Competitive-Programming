
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

ll d[N*2];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n,a;
	cin>>n>>a;
	ll ms = 0;
	loop(i,0,n)cin>>d[i],ms+=d[i];
	loop(i,0,n){
		ll l = max(1LL,a-(ms-d[i]));
		ll r = min(d[i],a-(n-1));
		ll k = d[i]-(r-l+1);
		cout<<k<<' ';
	}
	cout<<endl;
	return 0;
}
