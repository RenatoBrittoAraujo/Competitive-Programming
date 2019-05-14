
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
<<<<<<< HEAD
=======
#define mp make_pair
>>>>>>> ae19d50492bbe421bc3e7c704cd3bbedd8445d2b
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

<<<<<<< HEAD
int dist(double x1,double y1,double x2,double y2){
	return hypot(abs(x1-x2),abs(y1-y2))hfr;
}
=======

>>>>>>> ae19d50492bbe421bc3e7c704cd3bbedd8445d2b

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
<<<<<<< HEAD
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	
	vector<pair<ll,ll>> d1,d2;	
	
	int x,y;	
	loop(i,0,n){
		cin>>x>>y;
		
		d1.eb(dist(x1,y1,x,y),i+1);
		d2.eb(dist(x2,y2,x,y),i+1);
	}
	
	sort(allv(d1));
	sort(allv(d2));
	
	loop(i,0,n + 1){
		ll cv = (i == 0)? 0 : d1[i-1].ff;
		
		set<int> sel;
		
		loop(j,0,i-1){
			
		}
			
 
	}
=======
	cin>>n;
	ll x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	
	vector<pair<ll,int>> d1;
	priority_queue<pair<ll,int>> cur;
	
	loop(i,0,n){
		ll x,y;
		cin>>x>>y;
		d1.eb(abs(x1-x)*abs(x1-x) + abs(y1-y)*abs(y1-y),i+1);
		cur.push(make_pair(abs(x2-x)*abs(x2-x)+abs(y2-y)*abs(y2-y),i+1));
	}	

	sort(allv(d1));	

	ll mx = min(cur.top().ff, d1[n-1].ff);

	set<int> toremove;
		
	loop(i,0,n){
		
		toremove.insert(d1[i].ss);
		
		while(!cur.empty() and !toremove.empty() and
		      toremove.find(cur.top().ss) != toremove.end())
			toremove.erase(cur.top().ss), cur.pop();
	
		mx = min(mx, d1[i].ff + cur.top().ff);

	}	
	
	cout<<mx<<endl;
>>>>>>> ae19d50492bbe421bc3e7c704cd3bbedd8445d2b

	return 0;
}
