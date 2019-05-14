#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    while(cin>>n>>a>>b,bool(n+a+b)){
        int s=n/a+n/b;
        int m = min(a,b);
        int mmc=m;
        while((mmc%a!=0||mmc%b!=0)||!mmc>=max(a,b))mmc+=m;
        s-=n/mmc;
        cout<<s<<endl;
    }
    return 0;
}
