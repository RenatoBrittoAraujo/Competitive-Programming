
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

double ax,ay,bx,by,tx,ty,x,y;
int n;
double pre[N], suff[N], add[N], all;

double dist(double a,double b,double c,double d){
	double resp = hypot(a-c,b-d);
	return resp;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>ax>>ay>>bx>>by>>tx>>ty;
	cin>>n;
	loop(i,1,n+1){
		cin>>x>>y;
		double d = dist(tx,ty,x,y);
		all += d * 2;
		suff[i] = pre[i] = dist(bx,by,x,y) - d;
		add[i] = dist(ax,ay,x,y) - d;
	}

	pre[0] = suff[n+1] = (double)LINF;

	loop(i,1,n+1)pre[i] = min(pre[i-1], pre[i]);

	for(int i = n; i > 0; i--)suff[i] = min(suff[i+1], suff[i]);

	double ans = suff[1] + all;

	loop(i,1,n+1)
			ans = min(ans , all + min(0.0, min(pre[i-1],suff[i+1])) + add[i]);

	cout<<fixed<<setprecision(20)<<ans<<endl;
	return 0;
}
