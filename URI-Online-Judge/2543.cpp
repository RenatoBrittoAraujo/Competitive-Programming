#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    while(cin>>n>>i,!cin.eof()){
    int s=0;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(y==0&&x==i)s++;
    }
    cout<<s<<endl;
    }
    return 0;
}
