#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,c;
    c=1;
    while(cin>>n>>m,bool(n+m)){
        int ma[n];
        for(int i=0;i<n;i++)cin>>ma[i];
        bool en;
        sort(ma,ma+n);
        cout<<"CASE# "<<c<<":"<<endl;
        for(int i=0;i<m;i++){
            en=false;
            int q,p;
            cin>>q;
            for(int j=0;j<n;j++){
                if(ma[j]==q){
                    en=true;
                    p=j+1;
                    break;
                }
            }
            if(en){
                cout<<q<<" found at "<<p<<endl;
            }else{
                cout<<q<<" not found\n";
            }
            }
        c++;
        }
    return 0;
}
