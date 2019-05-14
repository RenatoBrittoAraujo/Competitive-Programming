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

int qra[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n,m;	
	cin>>n;int x;
	loop(i,0,n)cin>>x,qra[x]=i+1;
	cin>>m;
	ll va=0,vb=0;
	loop(i,0,m){
		cin>>x;
		int a = qra[x];
		int b = n-qra[x]+1;
		va+=a;vb+=b;
	}
	cout<<va<<' '<<vb<<endl;
	return 0;
}
