#include <bits/stdc++.h>

using namespace std;



int dptable[4000][11];
int mv;

int tsp(int p,int pos){
    if(dptable[pos][p]!=-1)return dptable[pos][p];
    if(pos==0)if(p==0)return dptable[pos][p]=0;else return dptable[pos][p]=10000;
    int va;bool df=0;
    for(int i=0;i<=ntr;i++){
        if(pos&(1<<i)){
            if(!df){df=1;va=tsp(i,pos^(1<<i))+dist[i][p];}
            else va=min(tsp(i,pos^(1<<i))+dist[i][p],va);
    }}
    return dptable[pos][p] = va;
}


