#include <bits/stdc++.h>

using namespace std;

int memo[10010];
int cl,in;
int z,i,m,l;
int cycle;

void sim(){
    if(memo[cl]!=-1)cycle=in-memo[cl];
    memo[cl]=in++;
    cl=(z*cl+i)%m;
}

int main(){
    int ca=1;
    while(cin>>z>>i>>m>>l,bool(z+i+m+l)){
        memset(memo,-1,sizeof memo);
        cl=l;
        in=0;
        cycle=-1;
        while(cycle==-1)sim();
        cout<<"Case "<<ca++<<": "<<cycle<<endl;
    }
    return 0;
}
