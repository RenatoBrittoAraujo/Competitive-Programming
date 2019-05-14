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
const int N = 60;

bool mp[N][N];
int n;
int px1,py1,px2,py2;
string s;

set<ii> m1,m2;

int visited[N*N];

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

void floodfill(int x,int y,bool f){
	if(x<0||x>=n||y<0||y>=n||visited[x*51+y]||mp[x][y])return;
	visited[x*51+y] = 1;
	if(f)m2.insert(ii(x,y));
	else m1.insert(ii(x,y));
	//cout<<"FLOODFILL "<<x<<' '<<y<<endl;
	loop(i,0,4)floodfill(x+dx[i],y+dy[i],f);
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;
	cin>>px1>>py1>>px2>>py2;
	py1--;px1--;py2--;px2--;
	loop(i,0,n){
		cin>>s;
		loop(j,0,n)mp[i][j]=s[j]-'0';
	}
	m1.insert(ii(px1,py1));
	m2.insert(ii(px2,py2));
	floodfill(px1,py1,0);
	if(visited[px2*51+py2]){cout<<0<<endl;return 0;}
	memset(visited,0,sizeof visited);
	floodfill(px2,py2,1);
	//if(m1.find(ii(px2,py2))!=m1.end()){cout<<0<<endl;return 0;}
	
	ll ans = INF;

	for(auto v1: m1){
		for(auto v2: m2){
			//cout<<"TEST PAIR "<<v1.ff<<' '<<v1.ss<<" WITH "<<v2.ff<<' '<<v2.ss<<endl;
			ll c1 = abs(v1.ff-v2.ff);
			c1*=c1;
			ll c2 = abs(v1.ss-v2.ss);
			c2*=c2;
			ans = min(ans,c1+c2);	
		}
	}

	cout<<ans<<endl;
	
	return 0;
}
