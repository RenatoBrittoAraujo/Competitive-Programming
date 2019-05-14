
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

int n,h;
ll ans = 0;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
		
	cin>>h>>n;
	ans = h+1;
	ans += n/2 + n%2;
	ans += ((1 + n/2)*((n/2) + 2))/2 - 1;
	if(n>(1LL<<(h-1))){
		n+=h;
		ll v = (1LL<<(h+1)) - n;
		ans += (()
		
	}
	cout<<ans-1<<endl;
	
	
	return 0;
}
