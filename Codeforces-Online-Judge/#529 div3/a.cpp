#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s,r;
    cin>>s;
    int ws=1,cstep=2;
    for(int i=0;i<n;i++){
        if(i==ws-1){r+=s[i];
        ws+=cstep;
        cstep++;}
    }
    cout<<r<<endl;
    return 0;
}