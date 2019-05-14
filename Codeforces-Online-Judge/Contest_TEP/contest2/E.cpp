
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

	double a,b;
	scanf("%lf:%lf",&a,&b);
	

	if(a >= 12.0)
		a -= 12.0;

	double c,d;
	if(12.0 - a < err and b < err)c = 0;
	else c = (a*60 + b)/(12.0*60.0);

	if(60.0 - b < err)d = 0;
	else d = b/60.0;

	c*=360.0;
	d*=360.0;

	cout<<fixed<<setprecision(10)<<c<<' '<<d<<endl;

	return 0;
}
