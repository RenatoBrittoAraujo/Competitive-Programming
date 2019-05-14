
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

int nc = 0;
int n;
string s;
int p1;

void dp(int p, int k){

	if(p == len(s)){
		n++;
		if(k == p1)
			nc++;
	}

	if(s[p] == '?'){
		dp(p + 1, k + 1);
		dp(p + 1, k - 1);
	}
		
	if(s[p] == '-')
		dp(p + 1, k - 1);

	if(s[p] == '+')
		dp(p + 1, k + 1);

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	p1 = 0;

	cin>>s;
	loop(i,0,len(s))
		if(s[i] == '+')p1++;
		else p1--;
		
	cin>>s;
	dp(0, 0);
	cout<<fixed<<setprecision(20)<<double(nc) / double(n)<<endl;
		

	return 0;
}
