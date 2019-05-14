#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ms=0,s;
    int va,v;
    for(int i=0;i<n;i++){
        cin>>v;
        if(va!=v){s=1;va=v;}
        else{s++;
        if(s>ms)ms=s;
        }
    }
    cout<<ms<<endl;
    return 0;
}
