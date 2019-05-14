<<<<<<< HEAD
=======

>>>>>>> ae19d50492bbe421bc3e7c704cd3bbedd8445d2b
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

ll n;
vector<pair<ll,ll>> k;
ll lst;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;
	ll v1,v2;
	loop(i,0,n){
		cin>>v1>>v2;
		k.eb(v1,v2);
	}		
	sort(allv(k));
	
	ll lst = k[0].ff;
	ll p = 0;
	ll st = 0;
	while(p < n){
		lst = k[p].ff;
		//cout<<lst<<' '<<p<<' '<<st<<endl;
		if(max(k[p].ss,st) < 4)st = 0, p++, lst++;
		else{
			
			ll qt = max(k[p].ss, st);
			
			int e = 1;	
			if(p + 1 == n){
				lst++;
				while(qt > 1<<(2*e)){
					e++;
					lst++;
				}
				break;
			}else{
<<<<<<< HEAD
				while(qt > 1<<(2*e) and lst < k[p+1].ff){
					e++;
					lst++;
				}	
				int v = 1<<(2*e - 2);
				st = qt / v + ((qt%4!=0)?1:0);
				//cout<<v<<' '<<qt<<' '<<st<<endl;
=======
				while(qt > 1<<(2*e) and p + 1 < n and lst < k[p+1].ff){
					e++;
					lst++;
				}	
				st = qt / int(1<<(2*e-2));
				//cout<<st<<' '<<qt<<' '<<(1<<(2*e-2))<<endl;
>>>>>>> ae19d50492bbe421bc3e7c704cd3bbedd8445d2b
				p++;
			}
		}
	}

	cout<<lst<<endl;	

	return 0;
}
