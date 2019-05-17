
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define loop(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define len(a) (int)a.size()
#define allv(a) (a).begin(),(a).end()
using ll = long long;
using ii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const double err = 1e-9;
const int mod = 1e9 + 7;
const int N = 1e5 + 10;



int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);

	ll n, m, k;
	cin>>n>>m>>k;
	
	ll t1 = n * m;
	if(t1 % k != 0)
	{
		cout<<"NO\n";
		return 0;
	}

	ll base = (n * m) / k;
	
	ll v = 2;

	cout<<"YES\n";
	cout<<"0 0\n";

	cout<<base<<" 0\n";
	cout<<base<<" 2\n";

	return 0;
}
