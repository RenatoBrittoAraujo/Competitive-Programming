#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l=0;
    string a;
    int n=0;
    int s=0;
    while(n<3){
        getline(cin,a);
        if(a=="caw caw "||a=="caw caw"){
            n++;
            cout<<s<<endl;
            s=0;
        }else{
        if(a[0]=='*')s+=4;
        if(a[1]=='*')s+=2;
        if(a[2]=='*')s+=1;
        }
    }
    return 0;
}
