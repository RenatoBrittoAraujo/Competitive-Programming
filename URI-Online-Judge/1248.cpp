#include <bits/stdc++.h>

using namespace std;

int main(){
    int ca;
    cin>>ca;
    cin.ignore();
    string a,b,c;
    while(ca--){
        getline(cin,a);
        getline(cin,b);
        getline(cin,c);
        bool chtr=false;
        set<char> l,r;
        for(int i=0;i<a.size();i++)l.insert(a[i]);
        int t = l.size();
        for(int i=0;i<b.size();i++){
            l.insert(b[i]);
            r.insert(b[i]);
            if(t!=l.size())chtr=true;
        }
        for(int i=0;i<c.size();i++){
            l.insert(c[i]);
            r.insert(c[i]);
            if(t!=l.size())chtr=true;
        }
        if(chtr)cout<<"CHEATER\n";
        else{
            for(auto i: l){
                bool p=false;
                for(auto j: r){
                    if(j==i)p=true;
                }
                if(!p)cout<<i;
            }
            cout<<endl;
        }
    }
    return 0;
}
