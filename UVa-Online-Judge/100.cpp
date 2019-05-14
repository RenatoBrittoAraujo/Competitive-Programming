#include <bits/stdc++.h>

using namespace std;

int memo[9999999];

int cl(int n){
    if(memo[n]!=-1)return memo[n];
    int v=n;
    int l=1;
    while(n!=1){
        if(n%2==0){
            n/=2;
        }else{
            n*=3;
            n+=1;
        }
        l++;
        if(l>10000)break;
    }
    return memo[v]=l;
}

int main()
{
    memset(memo,-1,sizeof memo);
    memo[1]=1;
    int i,j;
    while(cin>>i>>j,!cin.eof())
    {
        cout<<i<<" "<<j<<" ";
        int mc;
        if(i==j)mc=cl(i);
        else
            for(int k=min(i,j);k<=max(i,j);k++){
                int v = cl(k);
                if(k==min(i,j)||v>mc)mc=v;
            }
        cout<<mc<<endl;
    }
    return 0;
}

