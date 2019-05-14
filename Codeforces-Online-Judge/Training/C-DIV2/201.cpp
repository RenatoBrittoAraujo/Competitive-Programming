
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

ll a[101];
ll n;

ll gdc(ll a,ll b){return b==0?a:gdc(b,a%b);}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;
	loop(i,0,n)cin>>a[i];
	sort(a,a+n);
	ll div = a[0];
	loop(i,0,n){
		if(a[i]%div!=0)div = gdc(a[i],div);
	}
	ll ne = a[n-1]/div;
	ne -= n;
	if(ne%2==0)cout<<"Bob\n";
	else cout<<"Alice\n";
	return 0;
}
