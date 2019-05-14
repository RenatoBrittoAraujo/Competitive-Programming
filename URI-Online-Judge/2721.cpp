#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string re[]={"Dasher","Dancer","Prancer","Vixen","Comet","Cupid","Donner","Blitzen","Rudolph"};

int main()
{
    int b=0,x;
    for(int i=0;i<9;i++){cin>>x;b+=x;}
    while(b>9)b-=9;
    cout<<re[b-1]<<endl;
    return 0;
}
