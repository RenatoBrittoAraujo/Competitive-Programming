
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
const int N = 1e8+10;

vector<ll> vals;

void gen(ll p=0,ll c=0,ll v=0){
	if(p==18){
		vals.pb(v);
		return;
	}
	gen(p+1,c,v*10);
	if(c<3){
		for(ll i=1;i<10;i++)gen(p+1,c+1,v*10+i);
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	gen();
	vals.pb(1000000000000000000);
	sort(allv(vals));
	ll l,r;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&l,&r);	
		auto lb = lower_bound(allv(vals),l); // - vals.begin();
		auto ub = upper_bound(allv(vals),r); //- vals.begin();
		printf("%d\n",int(ub-lb));
	}
	
	return 0;
}
