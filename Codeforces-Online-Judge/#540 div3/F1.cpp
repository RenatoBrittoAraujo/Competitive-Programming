
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

ll n,a,b;
int c[N*3];
int G[N*3];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;
	loop(i,0,n)cin>>c[i];
	loop(i,0,n){
		cin>>a>>b;
		G[a].pb(b);
		G[b].pb(a);
	}	
	
	

	return 0;
}
