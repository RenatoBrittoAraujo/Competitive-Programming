#include <bits/stdc++.h>

using namespace std;

int cond[21][3];

int co,n,m;

int sq[8]={0,1,2,3,4,5,6,7};

int test(){
    bool val=1;
    for(int i=0;i<m;i++){
        int p=0,d=1;
        while(p<n&&sq[p]!=cond[i][0]&&sq[p]!=cond[i][1])p++;
        while(d<n&&sq[p+d]!=cond[i][0]&&sq[p+d]!=cond[i][1])d++;
        if(cond[i][2]>0){
            if(d>cond[i][2]){val=0;break;}
        }else{
            if(d<-cond[i][2]){val=0;break;}
        }
    }
    return val;
}

int main(){
    while(cin>>n>>m,bool(n+m)){
        co=0;
        for(int i=0;i<m;i++)cin>>cond[i][0]>>cond[i][1]>>cond[i][2];
        do{co+=test();}while(next_permutation(sq,sq+n));
        cout<<co<<endl;
    }
    return 0;
}
