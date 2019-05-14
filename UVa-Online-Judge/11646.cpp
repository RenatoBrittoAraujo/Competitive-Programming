#include <bits/stdc++.h>

using namespace std;

double hi,lo,le,rat,gc,lr,wr;
int ca=1,i;

int main(){
    while(scanf("%lf %*c %lf",&lr,&wr)!=EOF){
        hi=400;lo=0;
        rat = wr/lr;
        gc = (atan(rat)*sqrt(rat*rat+1)+1)*2;
        for(i=0;i<40;i++){
            le=(hi+lo)/2.0;
            if(le*gc>400)hi=le;
            else lo=le;
        }
        printf("Case %d: %.10f %.10f\n",ca++,le,le*rat);
    }
    return 0;
}
