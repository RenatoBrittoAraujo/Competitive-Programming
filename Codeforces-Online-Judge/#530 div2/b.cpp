#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool f=0;
    int v1=1,v2=1;
    while(v1*v2<n){
        if(f)v1++;
        else v2++;
        f=!f;
    }
    cout<<v1+v2<<endl;
    return 0;
}