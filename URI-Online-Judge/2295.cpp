#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,g,ra,rg;
    cin>>a>>g>>ra>>rg;
    float pa = a/ra;
    float pg = g/rg;
    if(pa<pg)cout<<"A\n";
    else cout<<"G\n";
    return 0;
}
