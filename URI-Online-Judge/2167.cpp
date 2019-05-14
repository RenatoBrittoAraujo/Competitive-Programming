#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p=0;
    int n,x;
    cin>>n;
    int o=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(o==0){
            if(x>=p)p=x;
            else o=i+1;
        }
    }
    cout<<o<<endl;
    return 0;
}
