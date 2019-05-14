#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int ii,ic;
    bool op=0;
    bool clo=0;
    bool p1=0,p2=0;
    int t = s.size();
    for(int i=0;i<t;i++)if(s[i]=='['){op=1;ii=i;break;}
    for(int i=t-1;i>=0;i--)if(s[i]==']'){clo=1;ic=i;break;}
    //cout<<op<<" "<<clo<<" "<<ii<<" "<<ic<<endl;
    if(!op||!clo||ii>ic){cout<<-1<<endl;return 0;}
    int v1,v2;
    for(int i=ii+1;i<ic;i++){if(s[i]==':'){p1=1;v1=i;break;}}
    for(int i=ic-1;i>ii;i--){if(s[i]==':'){p2=1;v2=i;break;}}
    //cout<<p1<<" "<<p2<<" "<<v1<<" "<<v2<<endl;
    if(!p1||!p2||v1>=v2){cout<<-1<<endl;return 0;}
    int ans = 4;
    for(int i=v1+1;i<v2;i++)if(s[i]=='|')ans++;
    cout<<ans<<endl;
    return 0;
}