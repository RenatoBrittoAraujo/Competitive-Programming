
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

int ar[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n,k;
	cin>>n>>k;
	
	loop(i,0,n)cin>>ar[i];
	
	sort(ar,ar+n);
		
	int x = 0,r = 1, res = 0;
	ll s = k;
	
	for(int y = 1;y < n;y++){
		ll t = y - x;
		t *= ar[y] - ar[y-1];
		s -= t;
		while(s < 0){
			s += ar[y] - ar[x];
			x++;
		}
	
		if(y - x + 1 > r){r = y - x + 1;res = y;}

	}
	
	cout<<r<<' '<<ar[res]<<endl;	

	return 0;
}
