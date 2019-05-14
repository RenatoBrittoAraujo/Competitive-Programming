#include <bits/stdc++.h>

using namespace std;

map<string, string> v;

int main()
{
    int n,c=1;
    while(cin>>n,n){
        int s=0,x;
        while(n--){cin>>x;s+=(x==0)?1:-1;}
        cout<<"Case "<<c<<": "<<-s<<endl;
        c++;
    }
    return 0;
}
