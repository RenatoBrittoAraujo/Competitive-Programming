#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n,k;
        cin>>n>>k;
        string r;
        int p=0;
        while(n--){
            r+=char(97+p);
            p++;
            if(p>=k)p=0;
        }
        cout<<r<<endl;
    }
    return 0;
}