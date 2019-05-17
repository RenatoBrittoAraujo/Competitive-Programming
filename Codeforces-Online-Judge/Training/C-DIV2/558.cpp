
#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
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

using point = ii;
using line = pair<ii, int>;

int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
	
	vector<line> ln;
	vector<ii> points;

	loop(i,0,n)
	{
		int a, b;
		cin>>a>>b;
		points.pb(point(a,b));
	}

	loop(i,0,len(points))
	{
		loop(j,i + 1, len(points))
		{
			int xx1 = points[i].x;
			int yy1 = points[i].y;
			int xx2 = points[j].x;
			int yy2 = points[j].y;
			
			int a = yy1 - yy2;
			int b = xx1 - xx2;
			int c = yy1 * xx2 - yy2 * xx1;

			int g = __gcd(a, __gcd(b,c));
		
			a /= g; b /= g; c /= g;

			if(a < 0)
				a = -a, b = -b, c = -c;
			if(a == 0 and b < 0)
				b = -b, c = -c;

			ln.insert(mp(mp(a, b), c));
		}
	}

	sort(allv(ln));

	ln.erase(unique(allv(ln),ln.end()));

	ll ans = (len(ln) * (len(ln) - 1)) / 2;

	int i = 0;

	vector<ll> cans;

	while(i < len(ln))
	{
		line & l = ;

		int a = l.x.x;
		int b = l.x.y;
		int c = l.y;

		int cnt = 1;	

		while(i < len(ln) and a == ln[i + 1].x.x and b == ln[i + 1].x.y)
			cnt++, i++;

		ans -= cnt * (cnt - 1) / 2;

		i++;
	}

	cout<<ans<<endl;

	return 0;
}
