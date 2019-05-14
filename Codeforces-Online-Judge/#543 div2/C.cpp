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

int q[1021];

int m = 0,k,n;

int d(){
	double v = double(m)/double(n);
	return floor(v * 100.0 + 0.5);
}

int s[121];
int p[121];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>k;
	loop(i,0,n)cin>>q[i];
	
	int nxt = 0;

	loop(i,0,k)s[i] = i;
	memset(p,1,sizeof p);

	set<int> ins;
	
	while(m!=n){
		int vd = d();
		loop(i,0,k){
			if(s[i] >= n)continue;
			p[i]++;
			if(vd == p[i])ins.insert(s[i]);
			if(p[i] >= q[s[i]]) m++, s[i] =  nxt++, p[i] = 1;
			if(vd == p[i]){
				ins.insert(s[i]);
				cout<<"ON "<<vd<<" SUBMISSION "<<s[i]<<" IS ON "<<p[i]<<" TEST\n";
			}
		}			
	}

	cout<<len(ins)<<endl;
	
	return 0;
}
