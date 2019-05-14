#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int d,n;
        cin>>d>>n;
        float mt=0;
        float v;
        while(n--){
            cin>>v;
            if(v>d)continue;
            float a=v;
            while(v<=d)v+=a;
            v-=a;
            float r = d-v;
            if(r>mt)mt=r;
        }
        printf("%.2f\n",mt);
    }
    return 0;
}
