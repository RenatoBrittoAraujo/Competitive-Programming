#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,c;
    cin>>l>>c;
    int t1 = l+(2*l-1)*(c-1);
    int t2 = (l-1+c-1)*2;
    cout<<t1<<endl<<t2<<endl;
    return 0;
}
