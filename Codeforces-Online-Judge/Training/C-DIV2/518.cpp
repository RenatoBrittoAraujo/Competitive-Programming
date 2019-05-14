
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
const int N = 1e5+10;

set<int> p[101];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
		
	int n,m,a,b;
	cin>>n>>m;
	int cnt = n+1;
	loop(i,0,m){
		cin>>a>>b;
		p[a].insert(cnt);
		p[b].insert(cnt++);
	}
	loop(i,1,n+1){
		cout<<1 + len(p[i])<<endl;
		cout<<i<<' '<<i<<endl;
		for(auto v: p[i]){
			cout<<i<<' '<<v<<endl;
		}
	}

	return 0;
}
