
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

int a[N*3];
int cn[2][(1<<20)+10];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n;	
	cin>>n;	
	loop(i,0,n)cin>>a[i];
	int x = 0;
	cn[1][0]=1;
	ll ans = 0;
	loop(i,0,n){
		x^=a[i];
		ans+=cn[i%2][x];
		cn[i%2][x]++;
	}
	cout<<ans<<endl;
	return 0;
}
