#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,v;
    while(cin>>n>>v,bool(n+v)){
        bool p=false;
        int tm=v,am=0;
        while(tm>0){am+=tm*tm;tm--;}
        if(am<n){}
        else if(am==n)p=true;
        else{
            for(int i=v;i>0;i--){
                int po=0,va=i,r=i;
                while(va>0){
                    po+=va;
                    if(po==n){p=true;break;}
                    r--;
                    if(r==0){r=va-1;va=r;}
                }
                if(p)break;
            }
        }
        if(p)cout<<"possivel\n";
        else cout<<"impossivel\n";
    }
    return 0;
}
