#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float l[3];
    for(int i=0;i<3;i++)cin>>l[i];
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(l[i]<l[j]){
                float t = l[i];
                l[i]=l[j];
                l[j]=t;
            }
        }
    }
    bool eq=false,is=false;
    bool rt[3]={0};
    if(l[0]<l[1]+l[2]){
        if(l[0]==l[1]&&l[1]==l[2]&&l[0]==l[2])eq=true;
        else if(l[0]==l[1]||l[1]==l[2]||l[0]==l[2])is=true;
        float x = l[0]*l[0] -l[2]*l[2] -l[1]*l[1];
        //cout<<"x="<<x<<endl;
        if(x==0)cout<<"TRIANGULO RETANGULO\n";
        else if(x>0)cout<<"TRIANGULO OBTUSANGULO\n";
        else cout<<"TRIANGULO ACUTANGULO\n";
        if(eq)cout<<"TRIANGULO EQUILATERO\n";
        else if(is)cout<<"TRIANGULO ISOSCELES\n";
    }else cout<<"NAO FORMA TRIANGULO\n";


    return 0;
}
