#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,1){
        int mn=0;
        short s;
        char p[10];
        s = to_string(pow(2,n+n-2)).size()-6;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int v = pow(2,i+j);
                if(j>0)printf("%*d",s,v);
                else printf("%*d",s-1,v);
            }
            cout<<endl;
        }
        if(n!=0)cout<<endl;
        else break;
    }
    return 0;
}
