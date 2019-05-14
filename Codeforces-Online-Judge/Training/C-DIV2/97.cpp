
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
	cin>>n;
	int ar[N];
	loop(i,0,n)cin>>ar[i];
	sort(ar,ar+n);
	if(n>1 or (n==1 and ar[0]!=1))cout<<1<<' ';
	else cout<<2<<' ';
	loop(i,0,n-2)cout<<ar[i]<<' ';
	if(n>1 and ar[n-2]==1 and ar[n-1]==1)ar[n-2]++;
	if(n>1)cout<<ar[n-2];
	cout<<endl;
	return 0;
}
