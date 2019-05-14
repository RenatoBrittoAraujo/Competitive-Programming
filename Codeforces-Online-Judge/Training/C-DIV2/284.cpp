
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



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int n;
	cin>>n;
	ll a,b,c;
	int ans = 0;
	loop(i,0,n){
		cin>>a>>b>>c;
		bool v1 = a*x1+b*y1+c>0;
		bool v2 = a*x2+b*y2+c>0;
		if(v1!=v2)ans++; 
	}	
	cout<<ans<<endl;
	return 0;
}
