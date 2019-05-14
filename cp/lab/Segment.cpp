
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

int a[N];
int s[4*N];
int n;

void build(int id = 1,int l = 0,int r = n){
	if(r-l<2){	
		s[id]=a[l];	
		return;
	}
	int mid = (l+r)/2;
	build(id * 2, l,mid);
	build(id * 2 + 1,mid,r);
	s[id]=s[id*2]+s[id*2+1];
}

void modify(int p,int x,int id = 1,int l = 0,int r = n){
	s[id]+=x-a[p];
	if(r-l<2){
		a[p]=x;
		return;
	}
	int mid = (l+r)/2;
	if(p<mid)modify(p,x,id*2,l,mid);	
	else modify(p,x,id*2+1,mid,r);
}

int sum(int x,int y,int id=1,int l=0,int r=n){
	if(x>=r or l>=y)return 0;
	if(x<=l and r<=y)return s[id];
	int mid = (l+r)/2;
	return 	sum(x,y,id*2,l,mid)+
		sum(x,y,id*2,mid,r);
}

int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;
	loop(i,0,n)cin>>a[i];
	build();
		
	bool f = 1;int l,r,op;
	while(1){
		loop(i,0,35)cout<<s[i]<<' ';cout<<endl;
		cout<<"OPERATION (1- MODIFY, 2- SUM) ";cin>>op;
		if(op==1){
			cin>>l>>r;
			modify(l,r);
		}else{
			cin>>l>>r;
			cout<<sum(l,r)<<endl;
		}
		f=!f;
	}

	return 0;
}
