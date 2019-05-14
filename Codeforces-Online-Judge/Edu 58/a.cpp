#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,l,r,d;
    cin>>c;
    while(c--){
        cin>>l>>r>>d;
        int ans;
        if(!(d>=l&&d<=r))ans=d;
        else ans = (r-r%d+d);
        cout<<ans<<endl;
    }
    return 0;
}