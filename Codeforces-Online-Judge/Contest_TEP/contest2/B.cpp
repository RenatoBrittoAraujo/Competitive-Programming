
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
using ii = pair<int,int>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

vector<ii> pts;

bool cmp(ii a, ii b){
	
	return a.y == b.y ? (a.x < b.x) : (a.y < b.y);

}

int det(ii a, ii b, ii c){

	return (a.x * b.y + a.y * c.x + b.x * c.y) - 
		   (c.x * b.y + c.y * a.x + b.x * a.y);

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;

	int stx=INF, sty=INF;
	int p;

	int x,y;
	loop(i,0,n){
		cin>>x>>y;

		pts.eb(x,y);
		if(sty > y or (sty == y and stx > x)){
			p = i;
			stx = x;
			sty = y;	
		}
	}

	int dn = n - 2;

	int ans = 0;

	while(dn--){

		ii p1 = pts[p%n];
		ii p2 = pts[(p+1)%n];
		ii p3 = pts[(p+2)%n];

		p++;
	
		if(det(p1,p2,p3) > 0){
			ans++;
			//cout<<"ON "<<p1.x<<' '<<p1.y<<endl;
		}		

	}


	cout<<ans<<endl;
	
	return 0;
}
