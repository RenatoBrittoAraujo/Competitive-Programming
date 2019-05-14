#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    int p;
    while(cin>>a>>p,!cin.eof()){
        int c=0;
        int in=0;
        bool e;
        for(int i=0;i<a.size();i++){
            if(a[i]=='W'){
                if(i==0)e=true;
                c++;
                if(!e&&in>0){in=0;c++;}
            }
            else{
                e=false;
                in++;
                if(in==p){
                    in=0;c++;
                }
            }
        }
        if(in!=0)c++;
        cout<<c<<endl;
    }
    return 0;
}
