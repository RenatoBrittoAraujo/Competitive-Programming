#include <bits/stdc++.h>

using namespace std;

double dp[101];

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        int s=0,a,b,c;
        for(int i=0;i<n;i++){
            cin>>a>>b>>c;
            int v = a*c;
            s+=v;
        }
        cout<<s<<endl;
    }
    return 0;
}
