
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
const int N = 5e3+10;

int a[N];

int memo[N];

int n, m, k;

int dp(int p, bitset<5001> bt = bitset<5001>()){

	if(p == n - m)
		return 0;

	int * ans = &memo[p];

	if(*ans != -1)
		return *ans;

	*ans = dp(p + 1, bt);
	
	if(bt[p])
		return *ans;

	bt[p] = 1;

	*ans = max(*ans, dp(p + 1, bt) + a[p] + a[p + m]);		

	return *ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m>>k;

	memset(memo, -1, sizeof memo);

	loop(i,0,n)
		cin>>a[i];

	int ans = 0;

	ans = dp(0);

	cout<<ans<<endl;
	
	return 0;
}
