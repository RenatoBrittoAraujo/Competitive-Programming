#include <bits/stdc++.h>

using namespace std;

int fig[1024][1024];

int dx[] = { 1,  -1,  0, 0};
int dy[] = {0,  0,  1, -1};

int n,m;

int flood_fill(int x, int y, int color, int new_color) {

    if (x < 0 || y < 0 || x >= n || y >= m) return 0;
    if (fig[x][y] != color) return 0;

    int vertice_count = 1;
    fig[x][y] = new_color;

    for(int i = 0; i < 8; ++i)
        vertice_count += flood_fill(x + dx[i], y + dy[i], color, new_color);

    return vertice_count;
}

int main(){
    char c;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c;
            if(c=='.')fig[i][j]=0;
            else fig[i][j]=1;
        }
    }
    int co=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(fig[i][j]==0){co++;flood_fill(i,j,0,1);}
        }
    }
    cout<<co<<endl;
    return 0;
}
