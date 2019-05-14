#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,b;
    int op=1;
    while(op==1){
        while(cin>>a,!(a>=0&&a<=10))cout<<"nota invalida\n";
        while(cin>>b,!(b>=0&&b<=10))cout<<"nota invalida\n";
        printf("media = %.2f\n",(a+b)/2);
        cout<<"novo calculo (1-sim 2-nao)\n";
        while(cin>>op,!(op==1||op==2))cout<<"novo calculo (1-sim 2-nao)\n";
    }
    return 0;
}
