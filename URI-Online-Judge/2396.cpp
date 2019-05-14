#include <bits/stdc++.h>

using namespace std;

int c[1000000];
int p[1000000];

int main()
{
    memset(c,0,sizeof c);
    int n,m,x;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            c[i]+=x;
        }
        p[i]=i+1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(c[j]<c[i]){
                int t = c[i];
                c[i]=c[j];
                c[j]=t;
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
    for(int i=0;i<3;i++)cout<<p[i]<<endl;
    return 0;
}
