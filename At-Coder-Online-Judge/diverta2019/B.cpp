
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
	
	ll r, g, b, n;
	cin>>r>>g>>b>>n;
	
	ll ans = 0;

	for(int i = 0; i * r <= n; i++)
		for(int j = 0; j * g <= n - i * r; j++)
		{
			if((n - j * g - i * r) % b == 0)
				ans++;
		}
	
	cout<<ans<<endl;

	return 0;
}
