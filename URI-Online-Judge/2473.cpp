#include <bits/stdc++.h>

using namespace std;

int main()
{
    int g,x;
    set<int> a;
    for(int i=0;i<12;i++){cin>>x;a.insert(x);}
    g=12-a.size();
    string s;
    if(g<3)s="azar";
    if(g==3)s="terno";
    if(g==4)s="quadra";
    if(g==5)s="quina";
    if(g==6)s="sena";
    cout<<s<<endl;
    return 0;
}
