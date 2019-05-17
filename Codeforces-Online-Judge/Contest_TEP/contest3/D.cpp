
#include <bits/stdc++.h>
using namespace std;
#define y second
#define x first
#define pb push_back
#define eb emplace_back
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()
#define allv(a) (a).begin(),(a).end()
using ll = long long;
using ii = pair<ll,ll>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

ii p[N];

bool coll(ii a, ii b, ii c){

	b.x -= a.x;
	c.x -= a.x;
	b.y -= a.y;
	c.y -= a.y;

	return !(b.x * c.y - b.y * c.x);

}

int o[N];

bool cmp(int a, int b){

	return p[a].x == p[b].x ? p[a].y < p[b].y : p[a].x < p[b].x;

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	bool val  =0;

	int n;
	cin>>n;

	loop(i,0,n){
		cin>>p[i].x>>p[i].y;
		o[i] = i;
	}

	sort(o, o + n, cmp);

	ii p1 = p[o[0]];
	ii p2 = p[o[1]];
	
	loop(i,2,n){
	
	 ii p3 = p[o[i]];
	 
	 if(!coll(p1, p2, p3)){
	
		cout<<o[0] + 1<<' '<<o[1] + 1<<' '<<o[i] + 1<<endl;
		return 0;
		 
	 }
		
	}
	
	return 0;
}
