
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
const int N = 1e4+10;

int a[N];

int memo[N][N][1];

int dp(int l, int r, bool t){

	cout<<"CALLING "<<l<<' '<<r<<' '<<t<<endl;

	int * ans = &memo[l][r][t];

	if(*ans != -1)
		return *ans;

	if(l == r){
		if(t)return a[l];
		else return 0; 
	}

	if(t)*ans = max(dp(l + 1, r, !t) + a[l], dp(l, r - 1, !t) + a[r]);
	else *ans = min(dp(l + 1, r, !t), dp(l, r - 1, !t));

	cout<<"ON "<<l<<' '<<r<<' '<<t<<" returning "<<*ans<<endl;

	return *ans;

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	while(cin>>n, cin.good()){
		
		memset(memo, -1, sizeof memo);

		loop(i,0,n)cin>>a[i];
		
		cout<<dp(0, n - 1, 1)<<endl;	
		
	}

	return 0;
}
