#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n,m,x;
        cin>>n>>m;
        int c[n]={0};
        for(int i=0;i<m;i++){cin>>x;c[x-1]++;}
        int mv=0,in;
        for(int i=0;i<n;i++){
            if(c[i]>mv){in=i+1;mv=c[i];}
        }
        float pmax = float(mv)/float(m);
        if(pmax>0.5)cout<<in<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
