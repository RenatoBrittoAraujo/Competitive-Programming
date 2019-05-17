
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

	ll n,q;
	
	cin>>n>>q;
	
	while(q--)
	{
		ll x, y;
		cin>>x>>y;
		x--; y--;
		
		if((x + y) % 2 == 0)
		{
			cout<< 1 + (x * n + y) / 2<<endl;
		}
		else
		{
			cout<< 1 + (x * n + y) / 2 + (n * n + 1) / 2<<"\n";
		}
			
	}	
	
	return 0;
}
