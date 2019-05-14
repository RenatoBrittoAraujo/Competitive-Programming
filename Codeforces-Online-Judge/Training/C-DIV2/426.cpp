
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

ll cubic(ll v){
	int l = 0,r = 1000000;
	while(r!=l){
		ll md = (l+r+1)/2;
		if(md*md*md>v)r=md-1;
		else l=md;
		//cout<<l<<' '<<r<<endl;
	}
	return l;
}

ll a,b;

int main(){
	//while(1){ll v;cin>>v;cout<<cubic(v)<<endl;}
	int q;
	scanf("%d",&q);
	while(q--){
		scanf("%I64d %I64d",&a,&b);
		ll x = cubic(a*b);
		if(x*x*x!=a*b)cout<<"no\n";
		else if(a%x==0 and b%x==0)cout<<"yes\n";
		else cout<<"no\n";
	}

	return 0;
}
