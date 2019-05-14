
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

ll fr[4*N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n,k,x,m = 3*N,mx = 0;
	cin>>n>>k;	
	loop(i,0,n)cin>>x,fr[x]++,m=min(m,x),mx = max(mx,x);
	ll cuts = 0;
	
	//for(int i = mx-1;i>=m;i--)fr[i] = fr[i+1] + fr[i];
		
	//for(int i=m;i<=mx;i++)cout<<fr[i]<<' ';cout<<endl;
	
	ll sc = 0;
	ll h = mx;
	ll c = 0;
	ll p = 3*N;
	//cout<<m<<' '<<mx<<endl;
	if(m != mx)while(1){
		ll x = sc - c*(p-1);	
		if(x>k){
			cuts++;
			h = p;	
			sc = p*c;
		}
		p--;
		if(p==m)break;
		c+=fr[p];
		sc+=fr[p]*p;
	}
		
	if(h>m)cuts++;
	
	cout<<cuts<<endl;

	return 0;
}
