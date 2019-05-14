#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        int t[n];
        for(int i=0;i<n;i++)cin>>t[i];
        int ns=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                if(j<n-1&&t[j]>t[j+1]){
                    ns++;
                    int temp=t[j];
                    t[j]=t[j+1];
                    t[j+1]=temp;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",ns);
    }
    return 0;
}
