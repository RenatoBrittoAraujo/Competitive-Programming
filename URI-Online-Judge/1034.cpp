#include <bits/stdc++.h>

using namespace std;

#define INF 10000000

int n,m;

int arr[26];

int dp[INF];

int bottom_up() {
    for(int j = 0; j <= m; j++) {
        dp[j] = INF;
    }
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = arr[i]; j <= m; j++) {
            dp[j] = min(dp[j], 1 + dp[j - arr[i]]);
        }
    }
    return dp[m];
}

int main()
{
    int c;
    cin>>c;
    while(c--){
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>arr[i];
        int r = bottom_up();
        cout<<r<<endl;
    }
    return 0;
}