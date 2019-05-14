#include <iostream>

using namespace std;

int r(int a,int b){
return (3*a)*(3*a)+b*b;
}

int b(int a,int b){
    return 2*a*a+5*5*b*b;
}

int ca(int a,int b){
    return -100*a+b*b*b;
}

int main()
{
    int c;
    cin>>c;
    while(c--){
        int x,y;
        cin>>x>>y;
        int re[3]={r(x,y),b(x,y),ca(x,y)};
        int ma=max(re[1],max(re[0],re[2]));
        if(ma==re[0])cout<<"Rafael ganhou\n";
        else if(ma==re[1])cout<<"Beto ganhou\n";
        else cout<<"Carlos ganhou\n";
    }
    return 0;
}
