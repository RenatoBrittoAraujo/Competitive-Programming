#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,n,m;
    while(cin>>x>>y,bool(x+y)){
        string a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        cin>>n>>m;
        int fx = n/x;
        int fy = m/y;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i/fx][j/fy];
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
