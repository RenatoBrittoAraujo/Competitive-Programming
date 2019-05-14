
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



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n;
	queue<int> p1,p2;
	cin>>n;
	int a,x;
	cin>>a;
	loop(i,0,a)cin>>x,p1.push(x);
	cin>>a;
	loop(i,0,a)cin>>x,p2.push(x);
	bool w=0;
	bool v=0;
	int r=0;
	loop(i,0,300){
		if(p1.size()==0){w=1;break;}
		if(p2.size()==0){w=1,v=1;break;}
		int ca = p1.front();p1.pop();
		int cb = p2.front();p2.pop();
		if(ca>cb)p1.push(cb),p1.push(ca);
		else p2.push(ca),p2.push(cb);
		r++;
	}	
	if(w==0)cout<<-1<<endl;
	else if(v==0)cout<<r<<' '<<2<<endl;
	else if(v==1)cout<<r<<' '<<1<<endl;
	

	return 0;
}
