
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

int st[N][(int)log2(N)+1];

int a[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n;
	cin>>n;
	//sparse table in the making
	loop(i,0,n)cin>>a[i];
	for(int j=0;j<log2(N)+1;j++)
		for(int i=0;i<n;i++)if(i+(1<<j)-1<n)
			st[i][j] = (j?min(st[i][j-1],st[i+(1<<(j-1))-1][j-1]):a[i]);
	int q,l,r;
	cin>>q;
	loop(i,0,q){
		cin>>l>>r;
		int x = 0;
		while((1<<(x+1))<=r-l+1)x++;
		//range [l,r] minimal query
		cout<<min(st[l][x],st[r-(1<<x)+1][x])<<endl;
	}

	return 0;
}
