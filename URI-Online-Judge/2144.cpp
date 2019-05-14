#include <bits/stdc++.h>

using namespace std;

int main()
{
    float rm,sm=0;
    int w1,w2,r,nc=0;
    while(cin>>w1>>w2>>r,bool(w1+w2+r)){
        rm=0;
        rm+=w1*(1+float(r)/30.0);
        rm+=w2*(1+float(r)/30.0);
        rm/=2.0;
        string s;
        sm+=rm;
        if(rm<13)s="Nao vai da nao";
        else if(rm<14)s="E 13";
        else if(rm<40)s="Bora, hora do show! BIIR!";
        else if(rm<=60)s="Ta saindo da jaula o monstro!";
        else s="AQUI E BODYBUILDER!!";
        cout<<s<<endl;
        nc++;
    }
    sm/=nc;
    if(sm>40)cout<<"\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n";
    return 0;
}
