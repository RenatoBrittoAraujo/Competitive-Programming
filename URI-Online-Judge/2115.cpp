
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

ii tr[N];

int memo[N];

int dp(int t, int p){

	int * ans = &memo[n];

	if(*ans != -1)
		return *ans;

	while(tr[p + 1].first <= t)
		p++;
	
	if(p < 0)
		return dp(t + 1, p);

	
	

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	
	while(cin>>n, cin.good()){

		int a,b;

		loop(i,0,n){
			cin>>a>>b;
			tr[i] = {a,b};
		}

		sort(tr, tr + n);

		cout<<dp(0)<<endl;

	}
	
	return 0;
}
