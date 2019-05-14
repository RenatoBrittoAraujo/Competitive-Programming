
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
const int N = 1e3+10;

int n,q,op,x;
bool m[N][N];

bool pr(){
	int gs=0;
	loop(i,0,n){
		int s = 0;
		loop(j,0,n){
			s+=m[i][j]&m[j][i];
		}
		s%=2;
		gs+=s%2;
	}
	return gs%2;
}

int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
	scanf("%d",&n);
	loop(i,0,n)
		loop(j,0,n)
			scanf("%d",&m[i][j]);
	scanf("%d",&q);
	bool v = pr();
	string s;
	loop(i,0,q){
		scanf("%d",&op);
		if(op==1 or op==2){
			scanf("%d",&x);
			v=!v;
		}else{
			s+='0'+v;
		}	
	}
	cout<<s<<endl;
	return 0;
}
