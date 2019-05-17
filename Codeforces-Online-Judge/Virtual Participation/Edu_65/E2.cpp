
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

	// Aprendendo com o código do TFG

	int n,x;
	cin>>n>>x;
	ll ans = 1;
	vector<int> a(n);
	vector<pair<int, int>> range(x + 1,  {n + 1, -1});		
	vector<int> left(x + 1, n + 1);

	loop(i,0,n)
	{
		cin>>a[i];
		range[a[i]].first = min(i, range[a[i]].first);
		range[a[i]].second = max(i, range[a[i]].second);
	}

	int last = -1;
	left[0] = -1;

	for(int i = 1; i <= x; i++)
	{
		if(range[i].second == -1)
		{
			left[i] = last;
			if(i == x)
			{
				cout<< (ll)x * (ll)(x + 1) / (ll)2 <<endl;
				return 0;
			}
			ans++;
			continue;
		}

		if(last >= range[i].second)
			break;
		
		if(i == x)
		{
			cout<< (ll)x * (ll)(x + 1) / (ll)2 <<endl;
			return 0;
		}

		left[i] = last = range[i].second;
		ans++;
	}

	last = n + 1;
	int r = 0;

	for(int i = x; i >= 1; i--)
	{
		if(range[i].second == -1)
		{
			while(r <= x and left[r] < last)
				r++;
			while(r > 0 and left[r - 1] >= last)
				r--;
			
			ans += r;
			
			continue;
		}

		if(last <= range[i].second)
			break;

		last = range[i].first;
		
		while(r <= x and left[r] < last)
			r++;
		while(r > 0 and left[r - 1] >= last)
			r--;
		
		ans += r;
	}
	
	cout<<ans<<endl;

	return 0;
}
