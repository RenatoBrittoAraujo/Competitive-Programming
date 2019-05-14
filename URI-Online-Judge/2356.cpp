#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    while(cin>>a>>b,!cin.eof()){
        bool r=false;
        for(int i=0;i<a.size();i++){
            if(a[i]==b[0]){
                bool v=true;
                for(int j=1;j<b.size();j++){
                    if(a[i+j]!=b[j])v=false;
                }
                if(v)r=true;
                if(r)break;
            }
            if(r)break;
        }
        if(r)cout<<"Resistente\n";
        else cout << "Nao resistente\n";
    }
    return 0;
}
