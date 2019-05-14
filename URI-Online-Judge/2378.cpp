#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int p=0;
    bool exc=false;
    int e,s;
    while(n--){
        cin>>s>>e;
        p+=e;p-=s;
        if(p>c)exc=true;
    }
    if(!exc)cout<<"N\n";
    else cout<<"S\n";
    return 0;
}
