#include <bits/stdc++.h>

using namespace std;

#define NInf -9999999

int m,c,pr[21][21];
int memo[210][21];

int shop(int mo,int g){
    if(mo<0)return -12312312;
    if(g==c)return m-mo;
    if(memo[mo][g]!=-1)return memo[mo][g];
    int ans = -1;
    for(int md = 1;md<=pr[g][0];md++)
        ans = max(ans, shop(mo-pr[g][md],g+1));
    return memo[mo][g]=ans;
}

int main(){
    int ca;
    cin>>ca;
    while(ca--){
        cin>>m>>c;
        for(int i=0;i<c;i++){
            cin>>pr[i][0];
            for(int j=1;j<pr[i][0]+1;j++)cin>>pr[i][j];
        }
        memset(memo,-1,sizeof memo);
        int s = shop(m,0);
        if(s<0)cout<<"no solution\n";
        else cout<<s<<endl;
    }
    return 0;
}
