
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

ll b=0,s=0,c=0,nb,ns,nc,pb,ps,pc;

ll func(ll x){
	ll v1 = max(0LL,c*x-nc);
	ll v2 = max(0LL,b*x-nb);
	ll v3 = max(0LL,s*x-ns);
	return v1*pc + v2*pb + v3*ps;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
		
	string str;
	cin>>str;	
	
	loop(i,0,len(str))
		if(str[i]=='B')b++;
		else if(str[i]=='S')s++;
		else c++;

	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	
	ll mo;
	cin>>mo;

	ll hi = 1e14;
	ll lo = 0;
	ll mid;
	
	while(hi-lo>1){
		mid = (hi+lo)/2;
		ll v = func(mid);
		if(v>mo)hi = mid;
		else lo = mid;
	}
	
	cout<<lo<<endl;
	
	return 0;
}
