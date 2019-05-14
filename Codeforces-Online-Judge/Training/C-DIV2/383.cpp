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
const int INF = 200;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

int dist[110][110];
int a[110];
bool vis[110];

int gdc(int a,int b){return b?gdc(b,a%b):a;}
int lmc(int a,int b){return a*(b/gdc(a,b));}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
	loop(i,0,n)cin>>a[i], a[i]--;
	
	memset(dist, INF, sizeof dist);

	loop(i,0,n){
		memset(vis, 0, sizeof vis);
		int e = a[i];
		int cnt = 1;
		while(1){
			dist[i][e] = cnt++, vis[e] = 1, e = a[e];
			if(vis[e]){
				if(e != i){
					cout<<-1<<endl;
					//return 0;
				}
				break;
			}
		}
		dist[e][a[e]] = min(dist[e][a[e]], cnt);
	}
	
	loop(i,0,n){
		loop(j,0,n)cout<<dist[i][j]<<' ';
		cout<<endl;
	}

	return 0;
}
