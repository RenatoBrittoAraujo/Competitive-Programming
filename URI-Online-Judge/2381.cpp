#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    set<string> a;
    string x;
    for(int i=0;i<n;i++){cin>>x;a.insert(x);}
    int i=1;
    for(auto v: a){
        if(i==k)cout<<v<<endl;
        i++;
    }

    return 0;
}
