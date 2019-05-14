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

int n,m;

int x,y;

vi ba[5010];

int stm[5010];

int dis(int a,int b){
	if(b < a)return n - a + b;
	else return b - a;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>m;
	loop(i,0,m){
		cin>>x>>y;
		x--;y--;
		ba[x].pb(y);
	}

	loop(i,0,n){
		sort(ba[i].begin(),ba[i].end(),
		[&](int a,int b){return dis(i,a) < dis(i,b);});
	}	
	
	loop(i,0,n){
		//cout<<"TESTING STATION "<<i<<endl;
		int ans = 0;
		loop(j,0,n){
			if(len(ba[j])==0)continue;
			ans = max(ans,
			dis(i,j) + n*(len(ba[j])-1) + dis(j,ba[j][0]));
		}
		stm[i] = ans;
	}
	
	loop(i,0,n)cout<<stm[i]<<' ';
	cout<<endl;
	
	return 0;
}
