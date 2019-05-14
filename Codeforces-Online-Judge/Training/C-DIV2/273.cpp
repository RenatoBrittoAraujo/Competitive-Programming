
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
const int N = 1e5+10;



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll b[3];
	
	cin>>b[0]>>b[1]>>b[2];

	sort(b, b + 3);

	if(b[1] * 2 + b[0] * 2 < b[2])
		b[2] = b[0] * 2 + b[1] * 2;

	ll ans = accumulate(b, b + 3, 0LL) / 3;

	cout<<ans<<endl;

	return 0;
}
