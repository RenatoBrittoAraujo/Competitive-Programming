
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
const int N = 2e5+10;

int a[N];
int memo[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
	loop(i,0,n)cin>>a[i];

	int ans = 1;
	int atu = 1;

	for(int i = n - 2; i >= 0; i--){

		if(a[i] * 2 >= a[i + 1])
			atu++;
		else
			atu = 1;

		ans = max(atu, ans);

	}

	cout<<ans<<endl;

	return 0;
}
