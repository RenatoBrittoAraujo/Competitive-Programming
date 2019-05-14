#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=10)cout<<7<<endl;
    else if(n<=30)cout<<7+n-10<<endl;
    else if(n<=100)cout<<7+20+(n-30)*2<<endl;
    else cout<<7+20+70*2+(n-100)*5<<endl;
    return 0;
}
