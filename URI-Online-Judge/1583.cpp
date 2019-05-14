#include <bits/stdc++.h>

using namespace std;

#define MAX_V 51

char G[MAX_V][MAX_V];

int dx[] = { 1,  0,  0, -1};
int dy[] = {0,  -1,  1, 0};

int flood_fill(int x, int y, char color, char new_color,int N,int M) {

    if (x < 0 || y < 0 || x >= N || y >= M) return 0;
    if (G[x][y] != color) return 0;

    int vertice_count = 1;
    G[x][y] = new_color;

    for(int i = 0; i < 4; ++i)
        vertice_count += flood_fill(x + dx[i], y + dy[i], color, new_color,N,M);

    return vertice_count;
}

int main()
{
    int n,m;
    while(cin>>n>>m,bool(n+m)){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>G[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(G[i][j]=='T'){
                        flood_fill(i+1,j,'A','T',n,m);
                        flood_fill(i-1,j,'A','T',n,m);
                        flood_fill(i,j+1,'A','T',n,m);
                        flood_fill(i,j-1,'A','T',n,m);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<G[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
