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

queue<ii> tu;

int k,n;
int ngen = 0;

ii nxtp(){
	if(ngen/k==ngen%k)ngen++;
	return {1+ngen/k,1+(ngen++)%k};
}

void pp(ii p){cout<<p.ff<<' '<<p.ss<<endl;}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>k;
	if(k*(k-1)<n){cout<<"NO\n";return 0;}
	else cout<<"YES\n";
	ii lp;	
	loop(i,0,n){
		if(i==0)lp = nxtp(),pp(lp);
		else{
			ii no = {-1,-1};
			do{
				if(no.ff!=-1)tu.push(no),no=nxtp();
				else if(!tu.empty())no = tu.front(),tu.pop();
				else no = nxtp();
			}while(no.ff == lp.ff or no.ss == lp.ss);
			lp = no;
			pp(no);
		}
	}
	return 0;
}
