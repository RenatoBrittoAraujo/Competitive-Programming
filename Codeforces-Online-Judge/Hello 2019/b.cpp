#include <bits/stdc++.h>

using namespace std;

int rot[20];
int n;

bool pos(int r,int np){
    if(r<0)r=360+r;
    if(r>360)r=r-360;
    bool p=0;
    if(np==n)return r==0?1:0;
    else{
        if(pos(r+rot[np],np+1)||pos(r-rot[np],np+1))p=1;
    }
    return p;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>rot[i];
    if(pos(0,0))cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}