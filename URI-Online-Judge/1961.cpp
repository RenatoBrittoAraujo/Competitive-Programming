#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,n,x;
    cin>>p>>n;
    cin>>x;
    int l=x;
    bool v = true;
    for(int i=0;i<n-1;i++){
        cin>>x;
        if(abs(x-l)>p)v=false;
        l=x;
    }
    if(v)cout<<"YOU WIN\n";
    else cout<<"GAME OVER\n";
    return 0;
}
