#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    float s;
    cin >>s;
    int p;float g;
    if(s<=400){
        g=s*0.15;
        s*=1.15;
        p=15;
    }else if(s<=800){
        g=s*0.12;
        s*=1.12;
        p=12;
    }else if(s<=1200){
        g=s*0.1;
        s*=1.1;
        p=10;
    }else if(s<=2000){
        g=s*0.07;
        s*=1.07;
        p=7;
    }else{
        g=s*0.04;
        s*=1.04;
        p=4;
    }
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",s,g,p);
    return 0;
}
