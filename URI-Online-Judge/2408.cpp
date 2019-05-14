#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3];
    for(int i=0;i<3;i++)cin>>a[i];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i]<a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<a[1]<<endl;
    return 0;
}
