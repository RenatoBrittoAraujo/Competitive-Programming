#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    float q1;
    int q,r;
    for(int i=0;i<abs(b);i++){
        q1 = float(a-i)/float(b);
        q=q1;
        if(q==q1){r=i;break;}
    }
    cout<<q<<" "<<r<<endl;
    return 0;
}
