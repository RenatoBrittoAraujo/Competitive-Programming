#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int n,m;
        cin>>n>>m;
        int r=n/m;
        if(n%m!=0)r++;
        cout<<r<<endl;
    }
    return 0;
}
