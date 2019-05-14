#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    float delta = b*b-4*a*c;
    if(delta < 0||a==0)cout<<"Impossivel calcular\n";
    else{
        float r1 = (-b+sqrt(delta))/(2.0*a);
        float r2 = (-b-sqrt(delta))/(2.0*a);
        printf("R1 = %.5f\nR2 = %.5f\n",r1,r2);
    }
    return 0;
}
