
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
	
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	a--;b--;
	int c = a/m, d =b/m;
	int e = a%m, f = b%m;
	if(c==d)cout<<1<<endl;
	else if(e == 0 and f == m-1)cout<<1<<endl;
	else if(e == 0 and f != m-1){
		if(b == n-1)cout<<1<<endl;
		else cout<<2<<endl;
	}else if(c+1==d)cout<<2<<endl;
	else if(e != 0 and f == m-1)cout<<2<<endl;
	else{
		if(b == n-1)cout<<2<<endl;
		else if(e + 1 == f)cout<<2<<endl;
		else cout<<3<<endl;
	}

	return 0;
}
