#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int k;
    cin>>s>>k;
    int sns=0;

    for(int i=0;i<s.size();i++)
        if(!(s[i]=='*'||s[i]=='?'))sns++;

    string r;
    int iv = sns;
    for(int i=0;i<s.size();i++){
        if(s[i]=='*'&&k>iv)
            for(int j=iv;j<k;j++){r+=s[i-1];iv++;}
        else if((s[i]=='?'||s[i]=='*')&&k<iv){r=r.substr(0,r.size()-1);iv--;}
        else if(!(s[i]=='*'||s[i]=='?'))r+=s[i];
    }
    if(r.size()!=k)cout<<"Impossible\n";
    else cout<<r<<endl;
    return 0;
}