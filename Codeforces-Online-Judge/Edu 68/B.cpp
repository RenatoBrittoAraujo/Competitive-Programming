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

ll em[N*2];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	ll n,m,k,x;
	cin>>n>>m>>k;	
	loop(i,0,n)cin>>em[i]; 
	sort(em,em+n);
	ll sum = k*(em[n-1]*(m/(k+1))) + em[n-1]*(m%(k+1));
	//cout<<sum<<endl;
	sum += em[n-2]*(m/(k+1));
	cout<<sum<<endl;
	return 0;
}
