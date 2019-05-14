
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

ll ar[N];
pair<ll,pair<ll,ll>> op[N];
ll b[N];
ll pas[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n,m,k;
	cin>>n>>m>>k;
	loop(i,0,n)cin>>ar[i];
	ll l,r,d;
	loop(i,0,m){
		cin>>l>>r>>d;
		op[i]=make_pair(d,ii(l-1,r-1));	
	}	
	ll x,y;
	loop(i,0,k){
		cin>>x>>y;
		pas[x-1]++;
		pas[y]--;
	}
	ll lvo=0;
	loop(i,0,m){
		lvo+=pas[i];
		b[op[i].ss.ff]+=lvo*op[i].ff;
		b[op[i].ss.ss+1]-=lvo*op[i].ff;
	}
	ll lv=0;
	loop(i,0,n){
		lv+=b[i];
		cout<<ar[i]+lv<<' ';		
	}cout<<endl;
	return 0;
}
