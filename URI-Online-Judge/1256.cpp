#include <bits/stdc++.h>

using namespace std;

vector<int> ch[201];

int main(){
    int ca;
    cin>>ca;
    while(ca--){
        int m,c,x;
        cin>>m>>c;
        for(int i=0;i<c;i++){
            cin>>x;
            ch[x%m].push_back(x);
        }
        for(int i=0;i<m;i++){
            cout<<i<<" -> ";
            for(auto v: ch[i])cout<<v<<" -> ";
            cout<<"\\"<<endl;
        }
        if(ca!=0){cout<<endl;
        for(int i=0;i<m;i++)ch[i].clear();}
    }
    return 0;
}
