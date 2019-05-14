#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]<v[j]){
                int t =v[i];
                v[i]=v[j];
                v[j]=t;
            }
        }
    }
    int c=m;
    while(c<=n&&v[c-1]==v[c])c++;
    cout<<c<<endl;
    return 0;
}
