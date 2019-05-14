#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d,e,f,h,i;
    double j;
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        scanf("%d",&e);
        scanf("%d",&f);
        h=pow(b-e,2);
        i=pow(c-f,2);
        j=sqrt(h+i);
        if(j+d<=a){printf("RICO\n");}else{printf("MORTO\n");}
    }
    return 0;
}
