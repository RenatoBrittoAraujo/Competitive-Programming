
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

vi G[N];
int in[N],f[N];
int n;

vi ans;

void drive(int u,int d,bool p,bool i){
	//cout<<"DRIVE "<<u<<' '<<d<<' '<<p<<' '<<i<<endl;
	
	if((d%2==0 and p) or (d%2==1 and i))in[u] = !in[u];

	if(in[u] != f[u]){
		//cout<<u<<" IS FUCKED\n";
		ans.pb(u);
		if(d%2==0)p=!p;
		else i=!i;
	}

	for(auto v: G[u]){
		drive(v,d+1,p,i);
	}
}

void clear(int u,int p = 69 + 420){
	if(u != 1){
		int i = 0;
		while(G[u][i]!=p)i++;
		G[u].erase(G[u].begin()+i);
		//cout<<"ERASED "<<p<<" FROM "<<u<<endl;
	}
	
	for(auto v: G[u])clear(v,u);
}

int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
	int a,b;
	scanf("%d",&n);
	loop(i,0,n-1){
		scanf("%d%d",&a,&b);	
		G[a].pb(b);
		G[b].pb(a);
	}
			
	clear(1);

	//cout<<"CLEAR\n";

	loop(i,1,n+1)scanf("%d",in+i);
	loop(i,1,n+1)scanf("%d",f+i);
	
	drive(1,1,0,0);

	printf("%d\n",len(ans));
	loop(i,0,len(ans))cout<<ans[i]<<endl;

	return 0;
}
