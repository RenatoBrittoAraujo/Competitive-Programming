
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

int n,c;
string s,ans;

bool solve(int p,int f){
	int i;
	if(p == n)return 1;
	if(f) i = 0;
	else{
		i = s[p];
		if(p == n-1)i++;
	}
	for(;i<c;i++){
		if((p>0 and i==ans[p-1]) or (p>1 and i==ans[p-2]))continue;
		ans[p] = i;
		if(i > s[p])f = 1;
		if(solve(p+1,f))return 1;
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>c;
	cin>>s;
	bool f = 0;
	loop(i,0,n)s[i]-='a',ans += (char)0;
	if(!solve(0,0))cout<<"NO\n";
	else{loop(i,0,n)cout<<char(ans[i]+'a');cout<<endl;}
	return 0;
}
