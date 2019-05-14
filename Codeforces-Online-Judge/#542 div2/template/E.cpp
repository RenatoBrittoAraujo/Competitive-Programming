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
	
	int k;
	cin>>k;
	vi a;
	a.pb(-1);
	int n = 2000;
	int s = k+n;
	loop(i,1,2000){
		a.pb(min((int)1e6,s));
		s-=min((int)1e6,s);
	}
	cout<<n<<endl;
	loop(i,0,2000)cout<<a[i]<<' ';
	return 0;
}
