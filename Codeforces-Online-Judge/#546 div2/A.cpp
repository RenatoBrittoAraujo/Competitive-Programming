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

int ch[10010];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	int n,k;
	cin>>n;
	int chc = 1;
	loop(i,0,n){
		int l,r;
		cin>>l>>r;
		loop(j,l,r+1)ch[j] = chc;
		chc++;
	}	
	set<int> read;
	cin>>k;
	loop(i,k,10000)if(ch[i]!=0)read.insert(ch[i]);
	cout<<read.size()<<endl;
	
	return 0;
}
