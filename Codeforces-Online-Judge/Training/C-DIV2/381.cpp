
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

int n,m,a,b;

//int fa[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m;
	//memset(fa,-1,sizeof fa);
	int mei = 1000000;
	loop(i,0,m){
		cin>>a>>b;
		mei = min(mei,b-a+1);
	}
	cout<<mei<<endl;
	int c = 0;
	loop(i,0,n)cout<<(c++)%mei<<' ';cout<<endl;
	return 0;
}
