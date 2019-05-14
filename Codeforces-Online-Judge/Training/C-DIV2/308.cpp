
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
//#define mp make_pair
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

ll w,m;

//vector<ll> expsum;
//map<ll, int> mp;

bool rec(ll v, ll x){	

		if(log(v) + log(w) > log(1e10))return false;

		bool ret = false;

		if(x < 0)
			ret |= rec(v * w, x + v);
		else if(x > 0)
			ret |= rec(v * w, x - v);
		else return true;
		
		ret |= rec(v * w, x);

		return ret;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>m>>w;

	if(rec(1LL, m))cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}
