#include <bits/stdc++.h>

using namespace std;

int main(){
    double pi=3.141592654;
    double a,b,c,ob;
    while(cin>>a>>b>>c,!cin.eof()){
        double tg = tan(a*pi/180.0);
        b*=tg;
        ob=c+b;
        printf("%.2f\n",5*ob);
    }
    return 0;
}
