#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2,d1,d2,v1,v2;
    cin>>n1>>d1>>v1>>n2>>d2>>v2;
    bool vc1=true;
    float t1=float(d1)/float(v1);
    float t2=float(d2)/float(v2);
    if(t2<t1)vc1=false;
    if(vc1)cout<<n1<<endl;
    else cout<<n2<<endl;
    return 0;
}
