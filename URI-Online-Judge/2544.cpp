#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        int s=0;
        while(n>1){n/=2;s++;}
        cout<<s<<endl;
    }
    return 0;
}
