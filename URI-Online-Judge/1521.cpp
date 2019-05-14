#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int k;
        cin>>k;
        while(1){
            int v=a[k-1];
            if(v==k){
                cout<<v<<endl;
                break;
            }else{
                k=v;
            }
        }
    }
    return 0;
}
