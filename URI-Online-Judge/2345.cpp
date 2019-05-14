#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[4];
    int s=0;
    for(int i=0;i<4;i++){cin>>a[i];s+=a[i];}
    int d;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            int v=a[i]+a[j];
            int dif=abs(2*v-s);
            if(i==0&j==1||dif<d)d=dif;
        }
    }
    cout<<d<<endl;
    return 0;
}
