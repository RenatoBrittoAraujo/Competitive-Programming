
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

bool kn[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n;
	cin>>n;
	loop(i,0,n)cin>>kn[i];
	loop(i,3,n+1)
		if(n%i==0){
			int v = n/i;
			loop(j,0,v){
				bool f = 1;
				for(int k=j;k<n;k+=v)if(!kn[k]){f=0;break;}
				if(f){cout<<"YES\n";return 0;}
			}
		}
	cout<<"NO\n";
	return 0;
}
