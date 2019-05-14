#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int a,b;
        cin>>a>>b;
        a--;b--;
        a+=a%3;
        b+=b%3;
        int r = (a/3)*(b/3);
        cout<<r<<endl;
    }
    return 0;
}
