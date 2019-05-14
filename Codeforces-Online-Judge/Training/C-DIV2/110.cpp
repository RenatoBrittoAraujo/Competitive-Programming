
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
const int N = 1e3+10;

int dp[N][N];

string s, t;

void pr(){
	int lv = max(len(t), len(s)) + 1;
	loop(i,0,lv){
		loop(j,0,lv){
			cout<<dp[i][j]<<' ';
		}
		cout<<endl;
	}
}

int ans = INF;

int main(){

	cin>>s>>t;

	loop(i,0,len(t) + 1)
		dp[i][len(s)] = len(t) - i;

	pr();

	cout<<"Now go\n";

	for(int i = len(t) - 1; i >= 0; i--){

		for(int j = 0; j < len(s); j++){


			dp[i][j] += dp[i+1][j+1];

			if(s[j] != t[i]){

				dp[i][j]++;
	
			}

			ans = min(ans, dp[i][j] + i);
			pr();

			cout<<"Answer is "<<ans<<endl;

		}
	}

	cout<<ans<<endl;

}
