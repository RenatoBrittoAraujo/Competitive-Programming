#include <bits/stdc++.h>

using namespace std;

int main(){
    float a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[2]>=a[1]+a[0])cout<<"n\n";
    else{
        float v = a[2]*a[2]-a[1]*a[1]-a[0]*a[0];
        if(v==0)cout<<"r\n";
        else if(v<0)cout<<"a\n";
        else cout<<"o\n";
    }
    return 0;
}
