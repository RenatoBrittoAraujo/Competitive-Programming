#include <bits/stdc++.h>

using namespace std;

int main(){
    float a[5];
    for(int i=0;i<5;i++)cin>>a[i];
    sort(a,a+5,greater<float>());
    float s=0;
    for(int i=1;i<4;i++)s+=a[i];
    printf("%.1f\n",s);
    return 0;
}
