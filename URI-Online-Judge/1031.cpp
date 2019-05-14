#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int p=0;
        int m=1;
        while(p!=12){
            if(n==13){cout << 1 << endl;break;}
            m++;
            p=0;
            int v=n;
            int a[n]={0};
            while(v>1){
                int j=m;
                a[p]=1;
                v--;
                while(j>0){
                    p++;
                    if(a[p]==0)j--;
                    if(p==n)p=0;
                }
            }
        }
        if(n>13)cout << m << endl;
    }
    return 0;
}
