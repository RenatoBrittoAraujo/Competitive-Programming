#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p=0;
    float m=0;
    float x;
    for(int i=0;i<6;i++){
        cin>>x;
        if(x>0){p++;m+=x;}
    }
    cout<<p<<" valores positivos\n";
    printf("%.1f\n",m/float(p));
    return 0;
}
