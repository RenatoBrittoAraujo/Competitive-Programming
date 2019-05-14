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

int a[N][N];
int b[N][N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;

	vector<vi> aa(n+m),bb(n+m);

	loop(i,0,n)loop(j,0,m){
		cin>>a[i][j];
		aa[i+j].pb(a[i][j]);
	}
	loop(i,0,n)loop(j,0,m){
		cin>>b[i][j];
		bb[i+j].pb(b[i][j]);
	}

	loop(i,0,n+m){
		sort(aa[i].begin(),aa[i].end());
		sort(bb[i].begin(),bb[i].end());
		if(aa[i] != bb[i]){
			cout<<"NO\n";
			return 0;
		}
	}
	
	cout<<"YES\n";
	
	return 0;
}
