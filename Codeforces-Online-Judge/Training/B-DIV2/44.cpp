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
	
	char a,b,c;
	ii v[3] = {{0,0},{0,1},{0,2}};
	loop(i,0,3){
		cin>>a>>b>>c;
		int v1 = a-'A';	
		int v2 = c-'A';
		if(b=='>')v[v1].ff++;
		else v[v2].ff++;
	}	
	sort(v,v+3);
	if(v[0].ff==v[1].ff or v[1].ff==v[2].ff){cout<<"Impossible\n";return 0;}
	map<int,char> mp;
	mp[0]='A';
	mp[1]='B';
	mp[2]='C';
	loop(i,0,3)cout<<mp[v[i].ss];
	cout<<endl;
	

	return 0;
}
