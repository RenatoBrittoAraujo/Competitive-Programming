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
const int N = 3e5+10;

bool del[N];
int a[N];
set<int> can[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
		
	int n,m;
	cin>>n>>m;
	
	loop(i,0,n)cin>>a[i],a[i]--;
	
	loop(i,0,m){
		int u,v;
		cin>>u>>v;
		u--;v--;
		can[u].insert(v);
	}
	
	set<int> rem;
	rem.insert(a[n-1]);
	
	int ans = 0;
	
	for(int i = n-2; i>=0; i--){
		bool val = 1;
		if(len(can[a[i]]) >= len(rem)){
			for(auto x: rem){
				if(!can[a[i]].count(x)){
					val = 0;
					break;
				}
			}
		}else val = 0;
		if(val){
			ans++;
			del[i] = 1;
		}else rem.insert(a[i]);
	}
	cout<<ans<<endl;		
	return 0;
}
