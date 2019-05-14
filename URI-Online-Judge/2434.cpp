#include <bits/stdc++.h>

using namespace std;

int main()
{
    int o,d;
    cin>>o>>d;
    int x,me;
    for(int i=0;i<o;i++){
        cin>>x;
        d+=x;
        if(i==0||d<me)me=d;
    }
    cout<<me<<endl;
    return 0;
}
