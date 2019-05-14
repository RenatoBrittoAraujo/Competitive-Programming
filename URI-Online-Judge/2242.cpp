#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    string b;
    int t=a.size();
    for(int i=0;i<t;i++){
        if(a[i]=='a'||a[i]=='e'|a[i]=='i'||a[i]=='o'||a[i]=='u')b+=a[i];
    }
    string c = b;
    reverse(b.begin(),b.end());
    if(b==c)cout<<"S\n";
    else cout << "N\n";
    return 0;
}
