#include <bits/stdc++.h>

using namespace std;

int main(){
    int l;
    while(cin>>l,!cin.eof()){
        double a = 2.0*sqrt(3)/5.0;
        a*=l*l;
        printf("%.2f\n",a);
    }
    return 0;
}
