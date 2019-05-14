#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        int a[n][3];
        char c;string b;
        vector<char> r;
        for(int i=0;i<n;i++){
            cin>>c>>a[i][1]>>b;
            a[i][0]=(int)c-65;
            if(b=="correct"){a[i][2]=1;r.push_back(a[i][0]);}
            else a[i][2]=0;
        }
        int t=0;
        for(int i=0;i<n;i++){
            int v = a[i][0];
            int en=false;
            for(auto a: r)if(a==v)en=true;
            if(en){
                if(a[i][2]==1)t+=a[i][1];
                else t+=20;
            }
        }
        cout<<r.size()<<" "<<t<<endl;
    }
    return 0;
}
