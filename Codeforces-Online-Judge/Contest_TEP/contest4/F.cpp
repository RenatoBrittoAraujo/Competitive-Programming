
#include <bits/stdc++.h>
using namespace std;
#define y second
#define x first
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

using point = pair<ll, ll>;

ll dist(point a, point b)
{
	return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;

	point p;

	cin>>p.x>>p.y;

	vector<point> vec(n);

	loop(i,0,n)
		cin>>vec[i].x>>vec[i].y;

	ll minp = 100000000000000LL, maxp = 0;

	loop(i,0,n){
		minp = min(dist(p, vec[i]), minp);
		maxp = max(dist(p, vec[i]), maxp);
	}

	double pi = acos(-1.0);

	double ans = ((double)maxp - (double)minp) * pi;

	cout<<fixed<<setprecision(20)<<ans<<endl;

	return 0;
}
