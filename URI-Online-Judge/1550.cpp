#include <bits/stdc++.h>

using namespace std;

int d[100010];

int inv(int n){
    string a=to_string(n);
    reverse(a.begin(),a.end());
    return stoi(a);
}

int bfs(int a,int b) {
    queue<int> tv;
    tv.push(a);
    d[a]=0;
    while(!tv.empty()) {
        int u = tv.front();
        tv.pop();
        for (int i=0;i<2;i++) {
            int v=u;
            if(i==0)v=inv(v);
            else v=v+1;
            if(v>100010)continue;
            if (d[v] == -1) {
                d[v] = d[u] + 1;
                tv.push(v);
            }
        }
        if(d[b]!=-1)break;
    }
    return d[b];
}

int main(){
    int c;
    cin>>c;
    int a,b;
    while(c--){
        cin>>a>>b;
        memset(d, -1, sizeof d);
        int r = bfs(a,b);
        cout<<r<<endl;
    }
    return 0;
}
