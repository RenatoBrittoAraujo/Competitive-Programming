
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
	
	int s,x1,x2;
	int t1,t2;
	int p,d;
	cin>>s>>x1>>x2;
	cin>>t1>>t2;
	cin>>p>>d;
	if(x1>x2){
		x1=s-x1;
		x2=s-x2;
		d=-d;	
		p=s-p;
	}
	p*=d;
	if(p>x1)p-=2*s;
	int v1 = (x2-x1)*t2;
	int v2 = (x2-p)*t1;
	cout<<min(v1,v2)<<endl;
	return 0;
}
