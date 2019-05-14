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

pair<ll,ll> bc[N];
ll sv[N];
ll n,s;

ll vk(int k){
	vector<ll> items;
	loop(i,0,n)items.pb(bc[i].ff+bc[i].ss*k);
	ll sum = 0;
	sort(allv(items));
	loop(i,0,k)sum+=items[i];
	//cout<<sum<<endl;
	return sum;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>s;
	loop(i,0,n)cin>>bc[i].first,bc[i].second=i+1;
	int hi = n;
	int lo = 0;
	ll lv;
	while(hi-lo>1){
		//cout<<hi<<' '<<lo<<endl;
		int mid = (hi+lo)/2;
		lv = vk(mid);
		if(lv>=s)hi=mid;
		else lo=mid;
	}
	ll v = vk(hi);
	if(v>s)cout<<lo<<' '<<vk(lo)<<endl;
	else cout<<hi<<' '<<v<<endl;
	return 0;
}
