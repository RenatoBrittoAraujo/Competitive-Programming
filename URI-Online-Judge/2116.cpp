#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int p1,p2;
    int a=0,an,mu=1;
    if(n==2)mu*=2;
    if(m==2)mu*=2;
    if(n!=2){
    for(int i=1;i<=n;i+=2){
        int d=0;
        for(int j=2;j<i;j++){
            if(i%j==0)d++;
            if(d>0)break;
        }
        if(d==0)a=i;
        if(a<=n)an=a;
    }
    if(a==n)mu*=a;
    else mu*=an;}
    if(m!=2){
    for(int i=1;i<=m;i+=2){
        int d=0;
        for(int j=2;j<i;j++){
            if(i%j==0)d++;
            if(d>0)break;
        }
        if(d==0)a=i;
        if(a<=m)an=a;
    }
    if(a==m)mu*=a;
    else mu*=an;}
    cout<<mu<<endl;
    return 0;
}
