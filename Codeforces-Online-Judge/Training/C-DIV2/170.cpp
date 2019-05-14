
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

bool usd[110];
int p[110];
int n,m;

int find(int v){
	//cout<<"FIND "<<v<<endl;
	if(p[v] == v){return v;}
	else return p[v] = find(p[v]);
}

void join(int a,int b){
	//cout<<"JOIN "<<a<<' '<<b<<endl;
	a = find(a);
	b = find(b);
	//cout<<"Performing parent change\n";
	if(a>b)p[a]=b;
	else p[b]=a;
	//cout<<"END OF JOIN\n";
	return;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m;
	loop(i,1,101)p[i]=i;
	int k,x,y;
	int v=0;
	loop(i,0,n){
		cin>>k;
		if(!k)v++;
		loop(i,0,k){
			cin>>x;
			usd[x]=1;
			if(i>0)join(x,y);
			y=x;
		}
	}
	set<int> disjoint;
	int sum=0;
	loop(i,1,m+1){
		if(usd[i])disjoint.insert(find(i));
	}
	v += disjoint.size();
	bool f=0;
	for(int i=0;i<110;i++)if(usd[i]==1){f=1;break;}
	if(v==1)v=0;
	if(!f)v=n;
	else if(v>1)v--;
	cout<<v<<endl;
	return 0;
}
