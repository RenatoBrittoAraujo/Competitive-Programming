#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin>>c;
    set<string> p;
    string a;
    while(c--){
        cin>>a;
        p.insert(a);
    }
    cout<<"Falta(m) "<<151-p.size()<<" pomekon(s)."<<endl;
    return 0;
}
