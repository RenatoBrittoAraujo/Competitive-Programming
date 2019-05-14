
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

ll proc(ll m, ll n, ll k){

	if(m < n)
		swap(m, n);

	if(k <= m - 1)
		return max(n * (m / (k + 1)), m * (n/(k+1)));

	else if(n - 1 < k and k < m)
		return n * (m / (k + 1));
	else
		return n / (k - m + 2);

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	ll n,m,k;
	cin>>n>>m>>k;

	if(k > n + m - 2){
		cout<<-1<<endl;
		return 0;
	}

	ll ans = proc(m, n, k);

	cout<<ans<<endl;
	
	return 0;
}


















