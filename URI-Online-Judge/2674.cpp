#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        bool p=true;
        int s1 = sqrt(n)+1;
        for(int i=2;i<s1;i++)if(n%i==0)p=false;
        if(n==1||n==0)p=false;
        if(!p)cout<<"Nada\n";
        else{
            string a = to_string(n);
            bool sp=true;
            for(int i=0;i<a.size();i++){
                int v = (int)a[i]-48;
                if(v==0||v==1||v==4||v==6||v==8||v==9){sp=false;break;}
            }
            if(sp&&p)cout<<"Super\n";
            else cout<<"Primo\n";
        }
    }

    return 0;
}
