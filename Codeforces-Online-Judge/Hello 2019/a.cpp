#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin>>a;
    bool pos=0;
    for(int i=0;i<5;i++){
        cin>>b;
        if(b[0]==a[0]||b[1]==a[1])pos=1;
    }
    if(pos)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}