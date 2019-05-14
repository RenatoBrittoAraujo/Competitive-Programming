#include <bits/stdc++.h>

using namespace std;

double dp[101];

int main()
{
    int c;
    cin>>c;
    while(c--){
        int a,b,v=-1,n;
        cin>>n;
        bool p=1;
        while(n--){
            cin>>a>>b;
            if(v==-1)v=a-b;
            else if(a-b!=v)p=0;
        }
        if(p)cout<<"yes\n";
        else cout<<"no\n";
        if(c)cout<<endl;
    }
    return 0;
}
