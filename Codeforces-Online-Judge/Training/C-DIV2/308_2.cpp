
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

ll w, m, s;

ll a[40];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll val = 1;
	cin>>w>>m;

	s = 0;

	while(m){

		a[s++] = m % w;
		m /= w;

	}

	//loop(i,0,40)cout<<a[i]<<' ';cout<<endl;

	for(int i = 0; i <= s; i++){
	
		if(a[i] != 0 and a[i] != 1 and a[i] != w-1 and a[i] != w){
			val = 0;
			break;
		}else if(a[i] == w - 1 or a[i] == w)
			a[i+1]++;

	}

	if(val)cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}
