#include <bits/stdc++.h>

using namespace std;

int mmin=0,mmax=0,q,a,b;
char op;

int main()
{
    scanf("%d",&q);
    while(q--){
        scanf(" %c %d %d",&op,&a,&b);
        if(op=='+'){
            if(max(a,b)>mmax)mmax = max(a,b);
            if(min(a,b)>mmin)mmin = min(a,b);
        }else{
            if(max(a,b)>=mmax&&min(a,b)>=mmin)printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}