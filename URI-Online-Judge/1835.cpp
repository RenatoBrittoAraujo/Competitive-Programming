#include <bits/stdc++.h>

using namespace std;

int con[101];

int main(){
    int c;
    cin>>c;
    for(int k=1;k<=c;k++){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)con[i]=i;
        int a,b,m;
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            while(a!=con[a])a=con[a];
            int v = con[b];
            for(int j=1;j<=n;j++){
                if(con[j]==v){
                    con[j]=a;
                }
            }
        }
        set<int> un;
        for(int i=1;i<=n;i++){un.insert(con[i]);}
        int v = un.size();
        if(v==1)cout<<"Caso #"<<k<<": a promessa foi cumprida\n";
        else cout<<"Caso #"<<k<<": ainda falta(m) "<<v-1<<" estrada(s)\n";
    }
    return 0;
}
