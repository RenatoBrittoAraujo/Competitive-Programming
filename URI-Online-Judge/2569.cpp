#include <bits/stdc++.h>

using namespace std;

int main(){
    int v1,v2;
    char op;
    cin>>v1>>op>>v2;
    int r;
    string a = to_string(v1);
    for(int i=0;i<a.size();i++)if(a[i]=='7')a[i]='0';
    v1=stoi(a);
    a = to_string(v2);
    for(int i=0;i<a.size();i++)if(a[i]=='7')a[i]='0';
    v2=stoi(a);
    if(op=='+')r=v1+v2;
    else r=v1*v2;
    a = to_string(r);
    bool ze=true;
    string re;
    for(int i=0;i<a.size();i++){
        if(a[i]=='7')a[i]='0';
        if(a[i]!='0')ze=false;
        if(a[i]=='0'&&!ze)re+=a[i];
        else if(a[i]!='0')re+=a[i];
    }
    if(re.empty())cout<<0<<endl;
    else cout<<re<<endl;
}
