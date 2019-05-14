#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,m;
    cin>>a>>b>>c;
    m = 3*min(a,min(b-1,c-2))+3;
    cout<<m<<endl;
    return 0;
}