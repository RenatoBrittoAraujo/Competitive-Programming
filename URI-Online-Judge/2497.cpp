#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t=1;
    while(cin>>n,n!=-1){
        cout<<"Experiment "<<t<<": "<<n/2<<" full cycle(s)"<<endl;
        t++;
    }
    return 0;
}
