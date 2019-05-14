#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,x;
    cin>>c;
    set<int> a;
    while(c--){
        cin>>x;
        a.insert(x);
    }
    cout<<a.size()<<endl;
    return 0;
}
