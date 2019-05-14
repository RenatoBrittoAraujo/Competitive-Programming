#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        string o;
        cin>>o;
        string nu;
        int in=0;
        while(o[in]!='!'){
            nu+=o[in];
            in++;
        }
        int k = o.size()-in;
        int n = stoi(nu);
        int m=1;
        unsigned long long int s=n;
        while(n-m*k>=1){
            s*=n-m*k;
            m++;
        }
        cout<<s<<endl;
    }

    return 0;
}
