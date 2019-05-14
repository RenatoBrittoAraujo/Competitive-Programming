
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define mp make_pair
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
const int N = 5000000;

string s;
ll a,ans;

int val[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>a>>s;
	int n = len(s);

	loop(i,0,n){
		ll sum = s[i] - '0';
		val[sum]++;
		loop(j,i+1,n){
			sum += s[j] - '0';
			val[sum]++;
		}
	}
	
	//loop(i,0,10)cout<<val[i]<<' ';cout<<endl;

	ans = 0;

	if(a == 0){
		ans += val[0] * n * n;
		loop(i,1,N)ans += val[i] * val[0];
	}else loop(i,1,N){
		if(a % i != 0)continue;
		if(i > N or a / i > N)continue;
		if(a/i == i)ans += val[i] * val[i];
		else ans += val[a/i] * val[i];
	}

	cout<<ans<<endl;

	return 0;
}
