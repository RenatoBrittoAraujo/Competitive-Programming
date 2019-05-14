#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    set<int> l;
    for(int i=0;i<n-1;i++){cin>>x;l.insert(x);}
    int v=1;
    bool a=false;
    for(auto i: l){
        if(v!=i){
            cout<<v<<endl;
            a=true;
            break;
        }
        v++;
    }
    if(!a)cout<<n<<endl;
    return 0;
}
