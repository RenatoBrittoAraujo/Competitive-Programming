
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

int an[N][3];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	string s;
	int q;
	cin>>s>>q;
	int n = len(s);
	//cout<<"PREPROCESSING\n";
	char c;
	loop(i,1,n+2){
		if(i<n+1)c = s[i-1];
		if(i>0){
			an[i][0]=an[i-1][0];
			an[i][1]=an[i-1][1];
			an[i][2]=an[i-1][2];
		}
		
		if(c=='x')an[i][0]++;
		if(c=='y')an[i][1]++;
		if(c=='z')an[i][2]++;
	}
	//loop(i,0,n+2)cout<<an[i][0]<<' ';cout<<endl;
	//loop(i,0,n+2)cout<<an[i][1]<<' ';cout<<endl;
	//loop(i,0,n+2)cout<<an[i][2]<<' ';cout<<endl;
	int l,r;
	//cout<<"PROCESSING QUEUES\n";
	loop(i,0,q){
		cin>>l>>r;
		int v = r-l;
		if(v<3){cout<<"YES\n";continue;}
		v/=3;
		int m = min(an[r][0]-an[l-1][0],
			min(an[r][1]-an[l-1][1],
			    an[r][2]-an[l-1][2]));
		if(m<v)cout<<"NO\n";
		else cout<<"YES\n";
	}

	return 0;
}
