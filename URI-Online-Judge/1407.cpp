#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c,k;
    while(cin>>n>>c>>k,bool(n+c+k)){
        int x,f[k]={0};
        for(int i=0;i<n*c;i++){
            cin>>x;
            f[x-1]++;
        }
        int me;
        for(int i=0;i<k;i++)if(i==0||f[i]<me)me=f[i];
        set<int> es;
        for(int i=0;i<k;i++)if(f[i]==me)es.insert(i+1);
        int p=0;
        for(auto i: es){
            cout<<i;
            if(p!=es.size()-1)cout<<" ";
            p++;
        }
        cout<<endl;
    }
    return 0;
}
