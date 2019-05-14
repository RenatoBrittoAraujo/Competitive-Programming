#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using ii = pair<int,int>;
const int mod = 1e9+7;
#define ff first
#define ss second
#define pb push_back
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define pr(x) printf("%d",x)
#define prl(x) printf("%lld",x)
#define pbr() printf("\n")
#define prs(s) printf(s)
const int N = 6;

int arr[N][N];

int t;

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

void floodfill(int x,int y){
	if(x<0||x>4||y<0||y>4)return;
	if(arr[x][y]==1)return;
	arr[x][y]=1;
	for(int i=0;i<4;i++){
		floodfill(x+dx[i],y+dy[i]);
	}
}

int main(){
	sc(t);
	while(t--){
		for(int i=0;i<5;i++)for(int j=0;j<5;j++)sc(arr[i][j]);
		floodfill(0,0);
		if(arr[4][4]==1)prs("COPS\n");
		else prs("ROBBERS\n");
	}	
	return 0;
}


