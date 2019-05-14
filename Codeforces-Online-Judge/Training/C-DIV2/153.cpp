
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

int pt[N];

ll binom(ll n,ll k){
	ll ans = 1;
	ll v = (n-k);
	if(v>k)swap(k,v);
	for(ll i = n;i>k;i--){
		ans*=i;
		while(ans%v==0 and v>1)ans/=v,v--;
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	/*while(1){
		ll v1,v2;
		cin>>v1>>v2;
		cout<<binom(v1,v2)<<endl;
	}*/
		
	int n,d;	
	cin>>n>>d;
	loop(i,0,n)cin>>pt[i];
	ll ans = 0;
	int i=0,j=2;
	while(i<n-2){
		while(j<n and pt[j]-pt[i]<=d)j++;
		if((j<n or (j==n and pt[n-1]-pt[i]<=d)) and j-i>2)ans+=binom(j-i-1,2);
		i++;
		j--;
	}	
	cout<<ans<<endl;
	return 0;
}
