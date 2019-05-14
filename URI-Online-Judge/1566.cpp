#include <bits/stdc++.h>

using namespace std;

int h[3000010];

int main(){
    int c,n;
    scanf("%d",&c);
    while(c--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&h[i]);
        sort(h,h+n);
        for(int i=0;i<n-1;i++){
            printf("%d ",h[i]);
        }
        printf("%d\n",h[n-1]);
    }
    return 0;
}
