#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x;
    while(m--){
        cin>>x;
        n+=x;
        if(n>100)n=100;
        if(n<0)n=0;
    }
    cout<<n<<endl;
    return 0;
}
