#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,1){
        for(int i=0;i<n;i++){
            //cout<<"  ";
            for(int j=0;j<n;j++){
                int v =abs(i-j)+1;
                if(j>0)printf("%4d",v);
                else printf("%3d",v);
                //if(j!=n-1)cout<<"   ";
            }
            cout<<endl;
        }
        if(n!=0)cout<<endl;
        else break;
    }
    return 0;
}
