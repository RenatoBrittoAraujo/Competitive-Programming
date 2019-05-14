#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int v1 = b*2+c*4;
    int v2 = a*2+c*2;
    int v3 = a*4+b*2;
    cout<<min(v1,min(v2,v3))<<endl;
    return 0;
}
