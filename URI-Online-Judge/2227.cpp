#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,v,t=1;
    while(cin>>a>>v,bool(a+v)){
        int mv=0;

        int ae[a]={0};

        int x,y;

        for(int i=0;i<v;i++){
            cin>>x>>y;
            ae[x-1]++;
            ae[y-1]++;
            int v = max(ae[x-1],ae[y-1]);
            if(v>mv)mv=v;
        }

        set<int> po;

        for(int i=0;i<a;i++){
            if(ae[i]==mv)po.insert(i+1);
        }

        cout<<"Teste "<<t<<endl;
        t++;

        int i=0;
        int tm=po.size();

        for(auto v: po){
            i++;
            cout<<v;
            cout<<" ";
        }

        cout<<endl<<endl;
    }
}
