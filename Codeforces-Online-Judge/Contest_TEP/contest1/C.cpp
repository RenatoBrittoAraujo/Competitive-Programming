
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

	int n;
	double k;
	cin>>n>>k;
	

	pair<double,double> s;
	cin>>s.ff>>s.ss;
	double a,b,x,y;
	double sum = 0;
	loop(i,0,n-1){
		cin>>a>>b;
		sum+=(hypot(a-s.ff,b-s.ss));
		s.ff = a;
		s.ss = b;
	}

	sum*=(1/50.0)*k;

	cout<<fixed<<setprecision(20)<<sum<<endl;
		

	return 0;
}
