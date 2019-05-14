#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,h,w;
    while(cin>>n>>b>>h>>w,!cin.eof()){
        int p,a;
        int mp=10000000;
        for(int i=0;i<h;i++){
            cin>>p;
            bool hv=0;
            int nv=0,mnv=0;
            for(int j=0;j<w;j++){
                cin>>a;
                if(a>=n)hv=1;
            }
            if(hv){
                int v = p*n;
                if(v<mp)mp=v;
            }
        }
        auto r = (mp<=b)?mp:-1;
        cout<<"-->>";
        if(r==-1)cout<<"stay home\n";
        else cout<<r<<endl;
    }
    return 0;
}
