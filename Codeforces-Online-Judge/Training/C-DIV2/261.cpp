
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

int ans[N][N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n,d,k;
	cin>>n>>k>>d;

	ll ch = 1;
	bool val = 0;
	loop(i,0,d){
		ch*=k;
		if(ch >= n){
		 	val = 1;
			break;
		}
	}

	if(!val){
		cout<<-1<<endl;
		return 0;
	}

	loop(i,1,n){
		loop(j,0,d)ans[i][j] = ans[i-1][j];
		for(int j = d-1; j >=0; j--){
			ans[i][j] = (ans[i][j] + 1) % k;
			if(ans[i][j])break;
		}
	}

	for(int i = 0; i < d; i++){
		for(int j = 0; j < n; j++){
			cout<<ans[j][i] + 1<<' ';
		}
		cout<<endl;
	}
	
	return 0;
}
