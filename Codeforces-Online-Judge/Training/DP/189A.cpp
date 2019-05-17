
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

int a,b,c;

int memo[N];

int dp(int n){

	if(n == 0)
		return 0;
	
	if(n < 0)
		return -INF;
		
	if(memo[n] != -1)
		return memo[n];

	int ans = -INF;

	ans = max(dp(n - a), ans);
	ans = max(dp(n - b), ans);
	ans = max(dp(n - c), ans);

	return memo[n] = ans + 1;

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;

	memset(memo, -1, sizeof(memo));
	
	cin>>n>>a>>b>>c;	

	cout<<dp(n)<<endl;
	
	return 0;
}
