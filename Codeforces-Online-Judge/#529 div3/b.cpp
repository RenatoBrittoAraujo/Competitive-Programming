#include <bits/stdc++.h>

using namespace std;

int a[100010];

int main(){
    int n;
    cin>>n;
    float mean=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    int ans = min(abs(a[n-2]-a[0]),abs(a[n-1]-a[1]));
    if(n==2)ans=0;
    cout<<ans<<endl;
    return 0;
}