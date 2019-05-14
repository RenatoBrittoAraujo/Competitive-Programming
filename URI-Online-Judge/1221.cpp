#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int c,r;bool ep;
    cin>>c;
    while(c--){
        cin>>r;
        ep=true;
        if(r%2==0||r==1)ep=false;
        else{
        int t=sqrt(r);
        for(int i=3;i<t+1;i+=2){
            if(r%i==0){ep=false;break;}
        }}
        if(r==2)ep=true;
        if(ep)cout<<"Prime\n";
        else cout<<"Not Prime\n";
    }
    return 0;
}
