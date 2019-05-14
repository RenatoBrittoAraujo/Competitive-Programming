#include <bits/stdc++.h>

using namespace std;

int t[110];
bool e[110];

int main()
{
    int m,k;
    while(cin>>m>>k,!cin.eof()){
        for(int i=0;i<m;i++)cin>>t[i];
        int tt=0,x;
        int mu=m;
        memset(e,0,sizeof e);
        for(int i=0;i<k;i++){
            cin>>x;
            if(mu!=0)tt+=t[x-1];
            if(e[x-1]==0){e[x-1]=1;mu--;}
        }
        if(mu!=0)tt=-1;
        cout<<tt<<endl;
    }
    return 0;
}
