
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

bool vecprod(ii a, ii b, ii d)
{

	b.x -= a.x;
	d.x -= a.x;
	b.y -= a.y;
	d.y -= a.y;

	ll prod = b.x * d.y - b.y * d.x;

	if(prod == 0)
		return false;
	else return true;

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
	
	vector<ii> pts;
	
	loop(i,0,n)
	{
		int a,b;
		cin>>a>>b;
		pts.eb(a,b);
	}

	ll ans = 0;

	loop(i,0,n)
	{
		loop(j,0,n)
		{
			loop(v,0,n)
			{
				//	cout<<i<<' '<<j<<' '<<v<<endl;

					//if(i == j or i == v)
					//	continue;

					ans += vecprod(pts[i], pts[j], pts[v]);
			}
		}
	}

	cout<<ans<<endl;

	return 0;
}
