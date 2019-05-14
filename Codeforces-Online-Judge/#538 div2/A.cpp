//TEMPLATE DO RENATO SINCE 1929
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int,int>;
#define ff first
#define ss second
#define pb push_back
#define ins insert
#define eb emplace_back
using vi = vector<int>;
const ll N = 100010;

int main(){
	int a,b,c;
	int x,y,z;
	cin>>x>>y>>z;
	cin>>a>>b>>c;
	bool val=1;
	if(x>a)val=0;
	else a-=x;
	int g = a+b;
	if(y>g)val=0;
	else g-=y;
	g+=c;
	if(z>g)val=0;
	if(val)cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
