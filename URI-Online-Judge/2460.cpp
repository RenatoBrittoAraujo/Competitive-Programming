#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    int fi[n];
    for(int i=0;i<n;i++){cin>>fi[i];}
    int m;
    cin>>m;
    for(int i=0;i<m;i++){cin>>x;for(int j=0;j<n;j++)if(fi[j]==x){fi[j]=0;break;}}
    int p=0;
    for(int i=0;i<n;i++)if(fi[i]!=0){cout<<fi[i];if(p!=n-m-1){cout<<" ";p++;}}
    cout<<endl;
    return 0;
}
