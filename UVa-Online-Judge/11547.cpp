#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        cout<<abs(n%100)/10<<endl;
    }
    return 0;
}
