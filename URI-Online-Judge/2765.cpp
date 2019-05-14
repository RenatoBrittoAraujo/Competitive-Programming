#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    getline(cin,a);
    for(int i=0;i<a.size();i++){
        if(a[i]==',')cout<<endl;
        else cout<<a[i];
    }
    cout<<endl;
    return 0;
}
