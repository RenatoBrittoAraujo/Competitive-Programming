#include <bits/stdc++.h>

using namespace std;

bool par_check(string in){
    int p=0;
    int t = in.size();
    if(t%2==0){
        int rk=0;
        for(int i=0;i<t;i++){
            if(in[i]=='(')rk++;
            else rk--;
            if(rk<0)break;
        }
        if(!rk)p=1;
    }
    return p;
}

set<string> sset;
set<string> ac;
string parp[10010];

int main(){
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        sset.insert(s);
    }
    n = sset.size();
    int in=0;
    for(auto s: sset){parp[in]=s;in++;}
    int vcount=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string testn = parp[i]+parp[j];
            string testi = parp[j]+parp[i];
            //cout<<testn<<endl;
            if(par_check(testn)){
                bool f=0;
                for(auto s: ac)if(s==testn){f=1;break;}
                if(!f){
                    //cout<<"VAL\n";
                    vcount++;
                    ac.insert(testn);
                }
            }
            //cout<<testi<<endl;
            if(par_check(testi)){
                bool f=0;
                for(auto s: ac)if(s==testi){f=1;break;}
                if(!f){
                    //cout<<"VAL\n";
                    vcount++;
                    ac.insert(testi);
                }
            }
        }
    }
    cout<<vcount<<endl;
    return 0;
}