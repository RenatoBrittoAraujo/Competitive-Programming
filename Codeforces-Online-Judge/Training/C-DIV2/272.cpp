
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
const int m = 1e9+7;
const int N = 1e5+10;

ll mod(ll n){return n%m;}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll a,b;	
	cin>>a>>b;
	ll v1 = mod((a*(a+1))/2);
	ll v2 = mod((b*(b-1))/2);
	ll v3 = mod(mod(v1 * b) + a);
	ll v4 = mod(v3*v2);
	cout<<v4<<endl;
	
	return 0;
}
