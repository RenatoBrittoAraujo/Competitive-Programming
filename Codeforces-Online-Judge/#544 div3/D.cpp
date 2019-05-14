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

ll n;
ll a[2*N],b[2*N];

ll gdc(ll a,ll b){return b==0?a:gdc(b,a%b);}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n;
	loop(i,0,n)cin>>a[i];
	loop(i,0,n)cin>>b[i];
	
	map<ii,ll> mp;
	
	ll mx = 0;
	ll gv = 0;
		
	loop(i,0,n){
		if(a[i] == 0){
			if(b[i] == 0)gv++;
			continue;
		}
		ll d = gdc(a[i],b[i]);
		mp[(ii(-b[i]/d,a[i]/d))]++;
	}		

	for(auto i = mp.begin(); i != mp.end();i++){
		mx = max(mx, i->ss);
	}

	cout<<mx+gv<<endl;
	
	return 0;
}
