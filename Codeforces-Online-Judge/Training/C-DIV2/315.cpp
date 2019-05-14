
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

ll vp,vq;
bool prime[int(1e7)];
int cml[int(1e7)];
int cms[int(1e7)];

pair<ll,ll> topal(int n){
	string s = to_string(n);
	string o = s;
	reverse(allv(s));
	return {stol(o+s),stol(o+s.substr(1))};
}

bool ispal[int(1e7)];

int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
	loop(i,2,1e7){
		if(!prime[i])
			for(int j = i+i;j<1e7;j+=i)
				prime[j] = 1;
	}
	
	int s = 0;
	loop(i,2,1e7){
		if(!prime[i])s++;//,cout<<i<<" PRIME\n";
		cml[i] = s;
	}	
	
	pair<ll,ll> p;
	int in = 1;
	while(p = topal(in), p.ss < 1e7){
		//cout<<p.ff<<' '<<p.ss<<endl;
		if(p.ff < 1e7)ispal[p.ff] = 1;
		ispal[p.ss] = 1;
		in++;
	}
	
	s = 0;
	loop(i,1,1e7){
		if(ispal[i])s++;//,cout<<i<<" PALINDROME\n";
		cms[i] = s;
	}

	/*while(1){
		int x;
		cin>>x;
		cout<<"PAL UP UNTIL "<<x<<" = "<<cms[x]<<endl;
		cout<<"PRIME UP UNTIL "<<x<<" = "<<cml[x]<<endl;
	}*/
		
	cin>>vp>>vq;

	//cout<<"CALC\n";
	
	int mi = 1;
	loop(i,0,1e7)if(cml[i] <= (vp*cms[i])/vq)mi = i;

	if(mi > 0)cout<<mi<<endl;
	else cout<<"Palindromic tree is better than splay tree\n";	

	return 0;
}
