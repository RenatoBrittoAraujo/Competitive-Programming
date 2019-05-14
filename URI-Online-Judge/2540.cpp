#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double c = 2.0/3.0;
    int n;
    while(cin>>n,!cin.eof()){
        int s=0,x;
        for(int i=0;i<n;i++){cin>>x;s+=x;}
        double v = double(s)/double(n);
        if(v>=c)cout<<"impeachment\n";
        else cout<<"acusacao arquivada\n";
    }
    return 0;
}
