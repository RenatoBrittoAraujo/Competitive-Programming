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

int n,m,k;
int p[101];

vi po[101];

int s[101];

vector<ii> sc;
int x;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m>>k;
	loop(i,0,n)cin>>p[i];
	loop(i,0,n){
		cin>>x;
		s[i] = x;	
		po[x].pb(p[i]);
	}	
	int ans = 0;
	loop(i,0,k){
		cin>>x;x--;
		int power = p[x];
		int school = s[x];
		sort(allv(po[school]));
		if(power != po[school][len(po[school])-1])ans++;
	}
	cout<<ans<<endl;
	
	
	
		

	return 0;
}
