#include <iostream>

using namespace std;

int main()
{
    int c,r;
    while(cin>>c>>r,c||r){
        int t = r-c;bool pos=true;int n=0;
        while(t>1&&t<200){
            if(t>=100){t-=100;n++;}
            if(t>=50){t-=50;n++;}
            if(t>=20){t-=20;n++;}
            if(t>=10){t-=10;n++;}
            if(t>=5){t-=5;n++;}
            if(t>=2){t-=2;n++;}
        }
        if(n!=2)pos=false;
        if(pos)cout << "possible\n";
        else cout << "impossible\n";
    }
    return 0;
}
