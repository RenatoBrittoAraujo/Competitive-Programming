
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
const int N = 2e5 + 10;

ll cs[N];
ll nxt[N];
bool tr[N];

int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n;
	cin>>n;
		
	for(ll i = 0; i < n; i++)
		cin>>cs[i];	

	for(ll i = 0; i < n; i++)
	{
		ll x;
		cin>>x;
		nxt[i] = x - 1;
	}

	ll ans = 0;

	for(ll i = 0; i < n; i++)
	{
		if(!tr[i])
		{
			vector<ll> path;
			set<ll> ps;
			ll u = i;
			
			while(u > -1 and u < n and ps.find(u) == ps.end() and tr[u] == false)
			{
				ps.insert(u);
				path.push_back(u);	
				tr[u] = true;
				u = nxt[u];
			}

			if(!ps.count(u))
				continue;

			if(u == nxt[u])
			{
				ans += cs[u];
				continue;
			}

			ll m = cs[u];

			for(ll j = len(path) - 1; j >= 0 and path[j] != u; j--)
			{
				m = min(m, cs[path[j]]);
			}

			ans += m;
		}
	}

	cout<<ans<<endl;

	return 0;
}
