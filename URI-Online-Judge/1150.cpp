#include <stdio.h>
 
int main() {
    int a,b,c,d;c=0;d=0;
    scanf("%d",&a);
    do{scanf("%d",&b);}while(b<=a);
    do{d=d+a+c;c++;}while(d<=b);
    printf("%d\n",c);
    return 0;
}