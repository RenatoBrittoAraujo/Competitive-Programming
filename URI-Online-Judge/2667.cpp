#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    int v=0;
    cin>>n;
    for(int i=0;i<n.size();i++){
        v+=(int)n[i]-48;
    }
    v%=3;
    cout<<v<<endl;
    return 0;
}
