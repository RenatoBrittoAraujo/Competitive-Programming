
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



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int q;
	cin>>q;
	ll n,k,d1,d2;
	while(q--){
		cin>>n>>k>>d1>>d2;
		bool ans = 0;
	
		for(ll s1 = -1;s1 < 2;s1 +=2)
			for(ll s2 = -1;s2 < 2; s2 += 2){
					ll x3 = k - s2 * d2 - s1 * 2 * d1;
					if(x3%3 != 0)continue;
					ll ar[3];
					ar[0] = x3 / 3;
					ar[1] = x3 / 3 + s1 * d1;
					ar[2] = x3 / 3 + s1 * d1 + s2 * d2;
					sort(ar,ar+3);
					if(ar[0] < 0)continue;
					ll v = ar[2] - ar[0] + ar[2] - ar[1];
					if(v + k > n)continue;
					if((n-k-v)%3==0)ans = 1;
				}	
	
		if(ans)cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}
