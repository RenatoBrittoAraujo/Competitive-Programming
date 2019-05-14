
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
	
	int n,q;
	cin>>n>>q;
	string s,o;s+='$';
	cin>>o;s+=o+'$';
	int lv=0;
	int csc=0;
	loop(i,0,n+1){
		if(s[i]=='.')lv++;
		else lv=0;
		if(lv>1)csc++;
	}	
	int p;char a;
	loop(i,0,q){
		cin>>p>>a;
		if((a=='.') == (s[p]=='.')){cout<<csc<<endl;continue;}
		int v = (s[p-1]=='.') + (s[p+1]=='.');
		if(a=='.')csc+=v;
		else csc-=v;
		s[p]=a;
		cout<<csc<<endl;
	}	
	return 0;
}
