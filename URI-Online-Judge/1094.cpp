#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    int co=0;
    int t[3]={0},x;
    char u;
    while(c--){
        cin>>x>>u;
        co+=x;
        if(u=='C')t[0]+=x;
        else if(u=='R')t[1]+=x;
        else t[2]+=x;
    }
    float p[3];
    for(int i=0;i<3;i++){p[i]=float(t[i])/float(co);p[i]*=100;}
    cout<<"Total: "<<co<<" cobaias\n";
    cout<<"Total de coelhos: "<<t[0]<<"\n";
    cout<<"Total de ratos: "<<t[1]<<"\n";
    cout<<"Total de sapos: "<<t[2]<<"\n";
    printf("Percentual de coelhos: %.2f %%\n",p[0]);
    printf("Percentual de ratos: %.2f %%\n",p[1]);
    printf("Percentual de sapos: %.2f %%\n",p[2]);
    return 0;
}
