#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        if(n%2!=0)n++;
        int s=0;
        for(int i=n;i<=n+8;i+=2){s+=i;}
        cout<<s<<endl;
    }
    return 0;
}
