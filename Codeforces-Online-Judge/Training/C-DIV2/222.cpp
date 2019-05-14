
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
const int N = 510;

char mz[N][N];

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int n,m,k;

bool vis[N][N];

bool floodfill(int x,int y){
	if(x<0||x>=n||y<0||y>=m||mz[x][y]=='X'||mz[x][y]=='#')return 0;
	if(k==0 || vis[x][y])return 0;
	//cout<<"Floodfill on "<<x<<' '<<y<<endl;	
	vis[x][y]=1;
	int v = 0;
	loop(i,0,4){
		int vx = x + dx[i];
		int vy = y + dy[i];
		v += floodfill(vx,vy);
	}
	if(v==0 and k>0){mz[x][y]='X',k--;return 0;}
	else return 1;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m>>k;
	loop(i,0,n)loop(j,0,m)cin>>mz[i][j];
	int tr = 1;bool fl;
	while(k>0){
		fl=0;
		loop(i,0,n){loop(j,0,m){
			if(mz[i][j]=='X' || mz[i][j] == '#')continue;
			int v = 0;	
			loop(ik,0,4){
				int x = i+dx[ik], y = j+dy[ik];
				if(x<0||x>=n||y<0||y>=m)continue;
				if(mz[x][y]=='.')v++;
			}
			if(v>=2)floodfill(i,j);//,cout<<"calling on "<<i<<' '<<j<<endl;
			if(k==0)break;
		}
		if(k==0)break;
		}
	}
	loop(i,0,n){
		loop(j,0,m){
			cout<<mz[i][j];
		}cout<<endl;
	}
	return 0;
}
