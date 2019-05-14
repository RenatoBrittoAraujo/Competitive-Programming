#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int m=0;
    long long int n,a=0;
    bool c=true;
    while(cin>>n,!cin.eof()){
        if(n>m&&c)m=n;
        if(a>n)c=false;
        a=n;
    }
    cout<<m+1<<endl;
    return 0;
}
