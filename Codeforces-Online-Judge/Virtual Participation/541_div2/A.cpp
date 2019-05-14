
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
const int INF = 0x3f3f3f3f;
const double err = 1e-9;
const int mod = 1e9 + 7;
const int N = 1e5 + 10;

using ll = long long;

int main(){

	int w1,h1,w2,h2;
	cin>>w1>>h1>>w2>>h2;

	ll ans = 0;

	ans += w1 + 2;
	ans += 2 * h1;
	ans += w2 + 2;
	ans += 2 * h2;
	ans += w1 - w2;

	cout<<ans<<endl;

	return 0;
}
