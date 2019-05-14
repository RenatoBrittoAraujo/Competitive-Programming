
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

ll gdc(ll a,ll b){return (b==0?a:gdc(b,a%b));}
ll lmc(ll a,ll b){return a*(b/gdc(a,b));}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll a,b;
	cin>>a>>b;
	ll v = gdc(a,b);
	if(abs(a/v - b/v)==1)cout<<"Equal\n";
	else if(a<b)cout<<"Dasha\n";
	else cout<<"Masha\n";

	return 0;
}
