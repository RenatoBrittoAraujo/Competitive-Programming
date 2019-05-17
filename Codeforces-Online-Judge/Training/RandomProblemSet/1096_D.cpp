
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
	
	int n;
	cin>>n;

	string s;
	cin>>s;

	ll a, b, c, d;

	a = b = c = d = 0;

	loop(i,0,n)
	{
		ll x;
		cin>>x;

		if(s[i] == 'h')
			a += x;
		if(s[i] == 'a')
			b = min(a, b + x);
		if(s[i] == 'r')
			c = min(b, c + x);
		if(s[i] == 'd')
			d = min(c, d + x);
	}

	cout << d << endl;

	return 0;
}
