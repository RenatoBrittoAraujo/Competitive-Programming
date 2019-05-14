#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        int m;string a;
        int ep=0,eh=0,in=0;
        while(n--){
            cin>>m>>a;
            if(a=="EPR")ep++;
            else if(a=="EHD")eh++;
            else in++;
        }
        cout<<"EPR: "<<ep<<endl;
        cout<<"EHD: "<<eh<<endl;
        cout<<"INTRUSOS: "<<in<<endl;
    }
    return 0;
}
