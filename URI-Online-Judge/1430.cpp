#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    map<char,int> n;
    n['W']=64;
    n['H']=32;
    n['Q']=16;
    n['E']=8;
    n['S']=4;
    n['T']=2;
    n['X']=1;
    while(getline(cin,s),s[0]!='*'){
        int nc=0;
        int v=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='/'){
                if(v==64)nc++;
                v=0;
            }else{
                v+=n[s[i]];
            }
        }
        cout<<nc<<endl;
    }
    return 0;
}
