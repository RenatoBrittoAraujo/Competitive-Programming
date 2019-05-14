#include <bits/stdc++.h>

using namespace std;

int r[1010]={0};

int main()
{
    int n,k,x;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        r[x-1]++;
    }
    int me=1000000;
    for(int i=0;i<k;i++){
        if(r[i]<me)me=r[i];
    }
    cout<<me<<endl;
    return 0;
}
