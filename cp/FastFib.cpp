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

unordered_map<ll,ll> ufib;

ll fib(ll n){
    if(n<2) return 1;
    if(ufib.find(n)!=ufib.end())return ufib[n];
    ufib[n] = (fib((n+1) / 2)*fib(n/2) +
	       fib((n-1) / 2)*fib((n-2) / 2)) % mod;
    return ufib[n];
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	while(1){
		ll n;
		cin>>n;
		cout<< fib(n) <<endl;
	}
	return 0;
}
