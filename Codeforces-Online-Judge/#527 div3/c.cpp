#include<bits/stdc++.h>

using namespace std;

string st[200];

int main()
{
    int n;
    cin>>n;
    n=2*n-2;
    for(int i=0;i<n;i++){
        cin>>st[i];
    }
    string r;
    bool pe=false;
    for(int i=0;i<n;i++){
        pe=!pe;
        /*for(int j=0;j<n;j++){
            if(i==j)continue;
            if(st[i]==st[j])continue;
            if(st[i].size()<=st[j].size()){
                if(st[j].substr(0,st[i].size())==st[i]){pe=true;break;}
            }
        }*/
        if(pe)r+='P';
        else r+='S';
    }
    cout<<r<<endl;
    return 0;
}