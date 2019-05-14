
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

ll ar[2*N];
ll calls[2*N];
ll cn[2*N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n,q;
	cin>>n>>q;	
	loop(i,0,n)cin>>ar[i];
	ll l,r;
	loop(i,0,q){
		cin>>l>>r;
		l--;r--;
		calls[l]++;
		calls[r+1]--;
	}
	ll lv=0;
	loop(i,0,n){
		lv+=calls[i];
		cn[i]=lv;	
	}
	sort(cn,cn+n);
	sort(ar,ar+n);
	ll sum = 0;
	for(int i=0;i<n;i++){
		//cout<<ar[i]<<" "<<cn[i]<<"\n";
		sum+=ar[i]*cn[i];
	}
	cout<<sum<<endl;
	return 0;
}
