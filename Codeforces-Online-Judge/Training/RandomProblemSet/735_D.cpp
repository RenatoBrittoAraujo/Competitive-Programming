
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

bool prch(ll n)
{
	ll div = 2;
	while(n > 1)
	{
		if(div * div > n)
			return true;
		if(n % div == 0)
			return false;
		else div++;
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);

	ll n;
	cin>>n;
	
	int ans;

	if(n < 4)
		ans = 1;

	else if(prch(n))
		ans = 1;

	else
	{
		if(n & 1)
			ans = 3;
		else
			ans = 2;
	}

	cout<<ans<<endl;
	
	return 0;
}
