
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

int df(int v1,int v2){
	//cout<<v1<<' '<<v2<<endl;
	int i = (26+v1-v2) % 26;
	int j = (26+v2-v1) % 26;
	//cout<<"RESULT  = "<<min(i,j)<<endl;
	return min(i,j);
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n,p;
	cin>>n>>p;
	string s;
	cin>>s;
	if(p>n/2)p=n+1-p;
	p--;
	bool f = n%2;
	
	int vd = 0;
	int l = n/2-1;
	int r = 0;
	loop(i,0,n/2){
		int v = df(int(s[i]-'a'),int(s[n-i-1]-'a'));
		if(v>0){
			l=min(i,l);
			r=max(i,r);
		}
		vd += v;
	}
	if(l>r or n==1){cout<<0<<endl;return 0;}
	if(n<=3){cout<<vd<<endl;return 0;}
	//cout<<p<<' '<<l<<' '<<r<<' '<<vd<<endl;
	vd += r - l + min(abs(p-l),abs(p-r));

	cout<<vd<<endl;
	return 0;
}
