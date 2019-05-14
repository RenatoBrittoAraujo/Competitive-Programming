#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        string a;
        cin>>a;
        int n;
        cin>>n;
        int t = a.size();
        for(int i=0;i<t;i++){
            int v=(int)a[i];
            v-=n;
            if(v<65)v+=26;
            a[i]=(char)v;
        }
        cout << a << endl;
    }
    return 0;
}
