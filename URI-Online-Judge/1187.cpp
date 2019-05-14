#include <stdio.h>
 
int main(){
    int i,j;
    char a;
    double b,c;b=0;
    scanf("%c",&a);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&c);
            if(i<5){
                if(j<=6){
                    if(j>i){
                        b=b+c;
                    }
                }else{
                    if(11-i>j){
                        b=b+c;
                    }
                }
            }
        }
    }
    if(a=='S'){
        printf("%.1lf\n",b);
    }else{
        printf("%.1lf\n",b/30);
    }
    return 0;
}