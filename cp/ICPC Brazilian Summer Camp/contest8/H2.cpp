#include <bits/stdc++.h>

using namespace std;

#define INF 100000

bool mp[1001][1001];

int n,m,ca;
char ch;

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool vis[1001][1001];
vector<int> dists;

bool test_edge(int x,int y,int p){
	cout<<"ON "<<x<<' '<<y;
	int count=0;
	for(int i=0;i<4;i++){
		if(mp[x+dx[i]][y+dy[i]])count++;
	}
	cout<<" COUNT = "<<count<<endl;
	if(count>=p)return 1;
	return 0;
}
vector<int> trees;

int floodfill(int x,int y,int d){
	trees.clear();
	//cout<<"FLOOD FILL "<<x<<' '<<y<<' '<<d<<endl;
	if(!(x>-1&&y>-1&&x<n&&y<m))return 0;
	if(!mp[x][y]||vis[x][y])return 0;
	vis[x][y]=1;
	int ans = d;
	bool g=0;
	if(test_edge(x,y,2))g=1;
	for(int i=0;i<4;i++){
		int val = floodfill(x+dx[i],y+dy[i],d+1);
		ans = max(val,ans);
		if(g)trees.push_back(val);
	}
	if(g)sort(trees.begin(),trees.end());
	if(g)dists.push_back(trees[trees.size()-1]+trees[trees.size()-2]),cout<<"NODE "<<x<<' '<<y<<' '<<"STORING "<<dists[dists.size()-1]<<endl;
	return ans;
}

int main(){
	scanf("%d",&ca);
	while(ca--){
		scanf("%d%d",&m,&n);
		memset(mp,0,sizeof mp);
		for(int i=0;i<n;i++)for(int j=0;j<m;j++){
			scanf(" %c",&ch);
			if(ch=='.'){
				mp[i][j]=1;
			}
		}
		int ans=0;
		for(int i=0;i<n;i++){for(int j=0;j<m;j++){
			if(mp[i][j]){	
				memset(vis,0,sizeof vis);
				floodfill(i,j,0);
				sort(dists.begin(),dists.end());
				ans=dists[dists.size()-1];
				break;	
			}
		}if(ans)break;}
		dists.clear();
		printf("Maximum rope length is %d.\n",ans);
	}
}
