#include <bits/stdc++.h>

using namespace std;

int main(){
    int r,n,c=1;
    while(cin>>r>>n,bool(r+n)){
        int d=n;
        int s=0;
        while(d<r){
            d+=n;
            s++;
            if(s>26)break;
        }
        cout<<"Case "<<c<<": ";
        if(s>26)cout<<"impossible\n";
        else cout<<s<<endl;
        c++;
    }
    return 0;
}
