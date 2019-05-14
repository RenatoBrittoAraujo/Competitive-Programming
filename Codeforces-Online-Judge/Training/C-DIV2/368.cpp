
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

vector<ll> sq;

int main(){	
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll a,b,c;
	cin>>a;
	if(a%2==1){
		b = ((a*a)+1)/2;
		c = b-1;
		if(b and c)cout<<b<<' '<<c<<endl;
		else cout<<-1<<endl;
	}else if(a%2==0 and a>2){
		b = a*a;
		b/=4;
		c=b+1;	
		b--;
		cout<<c<<' '<<b<<endl;

	}else cout<<-1<<endl;
		

	return 0;
}
