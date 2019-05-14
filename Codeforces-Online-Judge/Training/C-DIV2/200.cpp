
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

ll gdc(ll a,ll b){
	return b==0?a:gdc(b,a%b);}

ll reverse_gdc(ll a,ll b){
	//cout<<a<<' '<<b<<endl;
	if(b==1)return a;
	if(a>b){
		ll v = a/b;
		a-=v*b;
		return v + reverse_gdc(a,b);
	}else{
		b-=a;
		return 1 + reverse_gdc(b,a);
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll a,b;
	cin>>a>>b;
	ll g = gdc(a,b);
	a/=g;b/=g;
	cout<<reverse_gdc(a,b)<<endl;
	return 0;
}
