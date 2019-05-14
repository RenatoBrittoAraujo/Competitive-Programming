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
	
	int a[N],x,l = -1,p = 0,mx = 0;
	
	loop(i,0,n){
		cin>>x;
		if(i == 0)a[p] = 1;
		else if(x != l)a[++p] = 1;
		else a[p]++;
		 l = x;
	}
	
	//loop(i,0,n)cout<<a[i]<<' ';
	//cout<<endl;

	loop(i,1,p+1){
		mx = max(min(a[i],a[i-1])*2,mx);
	}
	
	cout<<mx<<endl;

	return 0;
}
