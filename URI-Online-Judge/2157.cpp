#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int a,b;
        cin>>a>>b;
        string r,s;
        for(int i=min(a,b);i<=max(a,b);i++){
            s+=to_string(i);
        }
        r+=s;
        reverse(s.begin(),s.end());
        r+=s;
        cout<<r<<endl;
    }
    return 0;
}
