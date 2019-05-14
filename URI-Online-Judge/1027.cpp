
#include <bits/stdc++.h>
using namespace std;
#define y second
#define x first
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
const int N = 1e6+10;

int pr[N], pl[N];
int lrx[N], llx[N];
bool tr[N], tl[N];

int n;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	while(cin>>n, cin.good()){

		int xi,yi;
	 	vector<ii> pts;
		loop(i,0,n){

			cin>>xi>>yi;
			pts.eb(xi,yi + N/2);
	
		}
		
		memset(pr, 0, sizeof pr);
		memset(pl, 0, sizeof pl);
		memset(tl, true, sizeof tl);
		memset(tr, false, sizeof tr);
		memset(lrx, -N, sizeof lrx);
		memset(llx, -N, sizeof llx);
		
		sort(allv(pts));

		for(auto pt: pts){
		
			int v = pt.y;

			int k = 1;

			while(k > -2){

				bool d = k == 1 ? 1 : 0;

				if(tr[v + k] == d and lrx[v + k] < pt.x){
					pr[v + k]++;
					tr[v + k] = !d;
					lrx[v + k] = pt.x;
				}

				if(tl[v + k] == d and llx[v + k] < pt.x){
					pl[v + k]++;
					tl[v + k] = !d;
					llx[v + k] = pt.x;
				}

				k-=2;

			}

		}

		int ans = 0;

		loop(i,0,N)
			ans = max(ans, max(pr[i], pl[i]));

		cout<<ans<<endl;

	}

	return 0;
}
