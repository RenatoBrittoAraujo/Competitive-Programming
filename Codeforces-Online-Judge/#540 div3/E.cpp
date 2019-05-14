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

queue<ii> tu,pa;

int k,n;
int ngen = 0;

set<ii> usd;

ii nxtp(){
	//cout<<"NGEN = "<<ngen<<endl;
	if(ngen>k*(k-1))return {-1,-1};
	ii r = {1+ngen/k,1+(ngen++)%k};
	if(r.ff == r.ss or usd.find(r)!=usd.end())/*cout<<"CALL\n",*/r = nxtp();
	return r;
}

void pp(ii p){cout<<p.ff<<' '<<p.ss<<endl;}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>k;
	if(k*(k-1)<n){cout<<"NO\n";return 0;}
	ii lp;	
	loop(i,0,n){
		if(i==0)lp = nxtp(),pa.push(lp);
		else{
			ii no = {-1,-1};
			do{
				if(no.ff!=-1)tu.push(no),no=nxtp();
				else if(!tu.empty())no = tu.front(),tu.pop();
				else no = nxtp();
			}while(no.ff == lp.ff or no.ss == lp.ss);
			if(no.ff == -1 and no.ss == -1){cout<<"NO\n";return 0;}
			lp = no;
			pa.push(no);
			usd.insert(no);
		}
	}
	cout<<"YES\n";
	while(!pa.empty())pp(pa.front()),pa.pop();
	return 0;
}
