
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

int ar[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n;
	cin>>n;
	int sum = 0;
	int mi = 10000;
	loop(i,0,n)cin>>ar[i],sum+=ar[i],mi=min(mi,ar[i]);	
	//cout<<mi<<' '<<sum<<endl;
	int ans = sum;	
	loop(i,0,n){
		loop(j,2,ar[i]){
			if(ar[i]%j==0){
				int v = sum - mi - ar[i];
				v += mi*j + ar[i]/j;
				ans = min(ans,v);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
