#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5];
    for(int i=0;i<5;i++)cin>>a[i];
    bool c=true,d=true;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]<a[j])d=false;
            if(a[i]>a[j])c=false;
        }
    }
    if(d)cout<<"D\n";
    else if(c)cout<<"C\n";
    else cout<<"N\n";
    return 0;
}
