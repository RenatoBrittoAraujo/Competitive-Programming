
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

int n , d;

vector<ii> pts;

int prod(ii a, ii b, ii c)
{
	a.x -= c.x;
	a.y -= c.y;
	b.x -= c.x;
	b.y -= c.y;

	return a.x * b.y - a.y * b.x;
}

bool isInside(int x, int y)
{
	int cans = -1;
	ii p = {x, y};
	bool val = true;

	loop(i,0,4)
	{
		ii p1 = pts[i];
		ii p2 =	pts[(i + 1) % 4];
		int pr = prod(p2, p, p1);

//		cout<<"SEGMENT "<<p1.x<<' '<<p1.y<<' '<<p2.x<<' '<<p2.y<<" with "<<p.x<<' '<<p.y<<endl;
//		cout<<"PROD = "<<pr<<endl;

		if(pr != 0)
			pr /= abs(pr);
		else
			if(x >= min(p1.x,p2.x) and x <= max(p1.x, p2.x)
				and y >= min(p1.y, p2.y) and y <= max(p1.y, p2.y))
				return true;
	
		if(i == 0)
			cans = pr;

		else if(pr != cans)
			val = false;
	}
	return val;
}


int main()
{
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>d;

	pts = {{0,d},{d,0},{n, n - d},{n - d,n}};
	
	int m;
	cin>>m;
	
	int ans = 0;

	loop(i,0,m)
	{
		int x, y;
		cin>>x>>y;

		cout<<(isInside(x, y) ? "YES" : "NO" )<<endl;
	}

	return 0;
}
