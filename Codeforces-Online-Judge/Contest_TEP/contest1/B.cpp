
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

vector<ii> v;

int n,x,y;

int p[N];

int find(int a){
	if(p[a] == a)return a;
	else return find(p[a]);
}

void join(int a,int b){
	//cout<<a<<' '<<b<<endl;
	a = find(a);
	b = find(b);
	if(a > b)swap(a,b);
	p[b] = a;
}

bool same(int a,int b){return find(a) == find(b);}


int norm(ii a){

	return a.ff*a.ff + a.ss*a.ss;

}

int dot(ii a, ii b){

	return a.ff*b.ff + a.ss*b.ss;	
	
}

double cross(ii a,ii b){return a.ff*b.ss - a.ss*b.ff;}

bool collinear(ii a, ii b){
	a.ff = a.ff - x;
	a.ss= a.ss - y;
	b.ff= b.ff - x;
	b.ss= b.ss - y;
	return fabs(cross(a,b)) < err;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	cin>>n>>x>>y;
	x+=1010;
	y+=1010;
	int a,b;
	loop(i,0,n){
		cin>>a>>b;
		v.eb(a+1010,b+1010);
	}

	for(int i = 0;i < 1010; i++)p[i]=i;

	loop(i,0,n)
		loop(j,i+1,n){
			
				if(collinear(v[i],v[j]))join(i,j);// cout<<i<<' '<<j<<"awkdjwadwa\n";	
			
		}

			
	int ans = 0;

	loop(i,0,n){
		//cout<<p[i]<<' ';
		if(p[i]==i)ans++;
	}//cout<<endl;

	cout<<ans<<endl;

	return 0;
}
