
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

vi dv;
set<int> divi;

int gdc(int a,int b){return b==0?a:gdc(b,a%b);}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int a,b;
	cin>>a>>b;
	int n = gdc(a,b);
	loop(i,1,sqrt(n)+1){
		if(n%i==0){
			if(i==n/i)divi.insert(i);
			else divi.insert(i),divi.insert(n/i);
		}
	}
	for(auto v: divi)dv.pb(v);
	//loop(i,0,len(dv))cout<<dv[i]<<' ';cout<<endl;
	int q;
	cin>>q;		
	while(q--){
		cin>>a>>b;
		int l = lower_bound(allv(dv),a)-dv.begin();
		int r = upper_bound(allv(dv),b)-dv.begin();
		//cout<<r<<' '<<l<<endl;
		if(r-l==0)cout<<-1<<endl;
		else cout<<dv[r-1]<<endl;
	}
	return 0;
}
