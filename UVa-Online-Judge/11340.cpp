#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        map<char,int> cp;
        int n,m;
        cin>>n;
        char a;int x;
        for(int i=0;i<n;i++){cin>>a>>x;cp[a]=x;}
        string l;
        cin>>m;
        cin.ignore();
        int pc=0;
        while(m--){
            getline(cin,l);
            for(int j=0;j<l.size();j++){
                if(cp.find(l[j])!=cp.end())pc+=cp[l[j]];
            }
        }
        printf("%d.%.2d$\n",pc/100,pc%100);
    }
    return 0;
}
