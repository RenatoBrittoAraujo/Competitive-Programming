
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



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
		
	int t,n,p;
	cin>>t;
	while(t--){
		cin>>n>>p;
		set<ii> edges;
		int p1,p2;
		int v = n*2+p;
		loop(i,0,n){
			loop(j,0,n){
				if(j!=i)edges.insert(ii(min(i+1,j+1),max(i+1,j+1)));	
				if(len(edges)==v)break;
			}
			if(len(edges)==v)break;
		}
		for(ii pair: edges){
			cout<<pair.ff<<' '<<pair.ss<<endl;
		}
	}	

	return 0;
}
