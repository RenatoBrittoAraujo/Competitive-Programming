#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int b,c;
    for(int i=0;i<a.size();i++){
        if(a[i]=='.'){
            b=stoi(a.substr(0,i));
            c=stoi(a.substr(i+1,a.size()-i-1));
            break;
        }
    }
        cout<<c<<"."<<b<<endl;
    return 0;
}
