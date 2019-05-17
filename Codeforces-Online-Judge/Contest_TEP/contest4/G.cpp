
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

ll calc(int n)
{
	ll ans = 0;
	ll v = 1;
	for(int i = 0; i < n; i++)
	{
		ans += v;
		v += 2; 
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	ll v[6];

	loop(i,0,6)
		cin>>v[i];

	ll mans = 0;

	loop(ind,0,6){

	ll ans = calc(v[ind] + v[(ind + 1) % 6] + v[ind - 1 < 0 ? 5 : ind - 1]);

	ans -= calc(v[(ind + 1) % 6]);
	ans -= calc(v[(ind + 3) % 6]);
	ans -= calc(v[(ind + 5) % 6]);
	if(ans > mans)
		mans = ans;
	}
	cout<<mans<<endl;

	return 0;
}
