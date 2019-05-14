
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

ll n,m,a,b;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>m>>a>>b;
	ll p = m - (a-1)%m;
	ll l = (b)%m;
	ll np = b-a+1;	
	if((a==1 and b==n)or(l==0 and p==0)or((b-1)/m == (a-1)/m)){cout<<"1"<<endl;return 0;}
	bool t = ((b-1)/m-(a-1)/m)>1;
	int ans = 0;
	if(t==0){
		ans = 2;
		if(p==m and l==0)ans = 1;
	}else{
		//cout<<"T = 1 P = "<<p<<" L = "<<l<<"\n";
		if(p==m and l==0)ans = 1;
		else if(l==0 or p==m)ans = 2;	
		else if(p+l==m)ans = 3;
		else if(n==b)ans = 2;
		else if(p+l>m)ans = 2;
		else ans = 3;
	}
	cout<<ans<<endl;
	return 0;
}
