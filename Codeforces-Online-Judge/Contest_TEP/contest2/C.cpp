
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
using ii = pair<ll,ll>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

bool disc(ii p, ii q, ii r){

	ll ret = (p.x*q.y + p.y*r.x +q.x*r.y) -
				 (r.x*q.y + r.y*p.x+q.x*p.y);

	return ret != 0;

}

ll hip(ii a, ii b){

	return (a.x - b.x)*(a.x - b.x)+
			(a.y - b.y)*(a.y - b.y);

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	ii a,b,c;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	cin>>c.x>>c.y;

	bool val = disc(a,b,c);

	ll v1 = hip(a,b), v2 = hip(b,c);

	val &= (v1 == v2);

	cout<<(val ? "Yes" : "No")<< endl;

	return 0;
}
