
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
#define dbg(a) cout<<"DEBUG #(a) = "<<(a)<<endl
using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

int m,n,op,a,b;

vector<ii> pa;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>m;
	loop(i,0,m){
		cin>>op>>a;
		dbg(op*a);
		if(op == 1)pa.eb(a,0);
		else cin>>b,pa.eb(a,b);
	}
	cin>>n;
	ll cnt = 1, tg, st = 0, p = 1;
	cin>>tg;
	while(cnt < n){
		if(p == tg){}
	}
	
	
	return 0;
}
