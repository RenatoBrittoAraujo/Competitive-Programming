
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

ll ar[N*10];
ll f[N*100];

int main(){
	cout<<"WTF\n";
	//ios::sync_with_stdio(0);cin.tie(NULL);
	cout<<"D\n";
	ll n;
	cin>>n;
	cout<<"C\n";
	loop(i,0,n)cin>>ar[i];
	f[1]=0;
	cout<<"B\n";
	loop(i,2,n+2)cout<<i<<' ',f[i]=(ll)f[i-1]^i;
	ll ans = 0;
	cout<<"A\n";
	loop(i,0,n){
		if((n/(i+1)%2==0)ans^=ar[i]^(f[n]%i);
		else ans^=ar[i]^f[i]^(f[n]%i);
	}	
	cout<<ans<<endl;

	return 0;
}
