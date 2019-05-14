#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int s=0;
    if(d>a)s+=d-a;
    if(e>b)s+=e-b;
    if(f>c)s+=f-c;
    cout<<s<<endl;
    return 0;
}
