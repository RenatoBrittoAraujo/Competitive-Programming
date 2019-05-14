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

int n,m;
int p,t,ct;

int stg[101];

int x,y;

vi ba[101];
stack<int> st[101];

int stm[101];

void stcopy(){
	loop(i,0,n){
		loop(j,0,len(ba[i]))st[i].push(ba[i][j]);
	}
}

int dis(int a,int b){
	if(b < a)return n - a + b;
	else return b - a;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>m;
	loop(i,0,m){
		cin>>x>>y;
		x--;y--;
		ba[x].pb(y);
	}

	loop(i,0,n){
		sort(ba[i].begin(),ba[i].end(),
		[&](int a,int b){return dis(i,a) < dis(i,b);});
	}	

	/*loop(i,0,n){
		cout<<"STATION "<<i<<" -> ";
		loop(j,0,len(ba[i]))cout<<ba[i][j]<<' ';
		cout<<endl;
	}*/
	
	loop(i,0,n){
		//cout<<"TESTING STATION "<<i<<endl;
		stcopy();
		memset(stg,0,sizeof stg);
		p = i;
		ct = 0;
		t = 0;
		while(ct < m){
			//cout<<p<<' '<<stg<<' '<<t<<endl;
	
			if(stg[p])
				ct+=stg[p],
				stg[p] = 0;		
	
			if(len(st[p]) > 0)
				stg[st[p].top()]++,
				st[p].pop();
			
			p = (p+1)%n;
			if(ct < m)t++;
		}
		stm[i] = t;
	}
	
	loop(i,0,n)cout<<stm[i]<<' ';
	cout<<endl;
	
	return 0;
}
