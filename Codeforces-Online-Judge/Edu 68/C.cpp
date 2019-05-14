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

ll dx[] = {0,-1,0,1};
ll dy[] = {-1,0,1,0};

ll mx[N],my[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	ll x1,y1,x2,y2,n;
	cin>>x1>>y1>>x2>>y2>>n;	
	x2-=x1;
	y2-=y1;
	string s;
	cin>>s;
	ll px=0,py=0;
	loop(i,1,n+1){
		int v = 3;
		if(s[i]=='U')v=2;
		else if(s[i]=='D')v=0;
		else if(s[i]=='L')v=1;
		px+=dx[v];py+=dy[v];
		mx[i]=px;my[i]=py;
	}
	ll lo = 0,hi = 1e18;
	while(hi-lo>1){
		ll mid = (hi+lo)>>1;
		ll s1 = mx[n]*(mid/n) + mx[mid%n];
		ll s2 = my[n]*(mid/n) + my[mid%n];
		ll d = abs(s1-x1)+abs(s2-x2)-mid;
		if(d<0)hi = mid;
		else lo = mid;
	}
	if(hi>=(ll)1e18)cout<<-1<<endl;
	else cout<<hi<<endl;
	return 0;
}
