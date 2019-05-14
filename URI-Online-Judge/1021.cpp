#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v[12]={0};
    float n;
    cin>>n;
    float m[12]={100,50,20,10,5,2,1,0.50,0.25,0.10,0.05,0.01};
    for(int i=0;i<12;i++){
        while(n>=m[i]){v[i]++;n-=m[i];n=round(n*100);n/=100;}
    }
    if(n>0)v[11]++;
    printf("NOTAS:\n");
    for(int i=0;i<6;i++){
        printf("%d nota(s) de R$ %.2f\n",v[i],m[i]);
    }
    printf("MOEDAS:\n");
    for(int i=6;i<12;i++){
        printf("%d moeda(s) de R$ %.2f\n",v[i],m[i]);
    }
    return 0;
}
