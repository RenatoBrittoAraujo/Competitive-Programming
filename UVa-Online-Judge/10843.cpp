#include <bits/stdc++.h>

using namespace std;

int cal[101][101];

int w(int n,int k){
    if(k==1)return cal[n][k] = 1;
    if(cal[n][k]!=0)return cal[n][k];
    for(int x=0;x<=n;x++){
        cal[n][k]+=w(n-x,k-1);
    }
    return cal[n][k] = cal[n][k]%1000000;
}

int main(){
    int n,k;
    memset(cal,0,sizeof cal);
    while(cin>>n>>k,bool(n+k)){
        cout<<w(n,k)<<endl;
    }
    return 0;
}
