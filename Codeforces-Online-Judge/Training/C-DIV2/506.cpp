
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
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
const int N = 3e5+10;

vector<int> segl, segr;
vector<pair<int,int>> seg;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int l = 0;
	int r = mod;

	int n;
	cin>>n;
	loop(i,0,n){
		int a,b;
		cin>>a>>b;
		segl.pb(a);
		segr.pb(b);
		l = max(l, a);
		r = min(r, b);
		seg.pb({a,b});
	}

	sort(allv(segl), greater<int>());
	sort(allv(segr));

	int ans = r - l;

	loop(i,0,n){
	
		int a = seg[i].ff;
		int b = seg[i].ss;

		l = (a == segl[0] ? segl[1] : segl[0]);
		r = (b == segr[0] ? segr[1] : segr[0]);

		ans = max(r - l, ans);

	}

	ans = max(0, ans);
	
	cout<<ans<<endl;

	return 0;
}
