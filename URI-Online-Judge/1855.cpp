#include <bits/stdc++.h>

using namespace std;

bool ma[101][101]={false};
char ter[101][101];

int dy[]={1,-1,0,0};
int dx[]={0,0,1,-1};

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>ter[i][j];
    int px=0,py=0;
    bool r=false;
    int d=0;
    while(px>-1&&px<m&&py>-1&&py<n&&ma[px][py]==0){
        //cout<<ter[px][py]<<" ";
        ma[px][py]=1;
        if(ter[px][py]!='.')
        switch(ter[px][py]){
        case '>':
            d=0;
            break;
        case '<':
            d=1;
            break;
        case 'v':
            d=2;
            break;
        case '^':
            d=3;
            break;
        case '*':
            r=true;
            break;
        }
        if(r)break;
        //cout<<d<<" ";
        px+=dx[d];
        py+=dy[d];
        //cout<<px<<" "<<py<<endl;
    }
    if(r)cout<<"*\n";
    else cout<<"!\n";
    return 0;
}

