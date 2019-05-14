#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        int ml=0;
        int cpd;
        cin>>cpd;
        int vr=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            vr+=x-cpd;
            if(vr<0)vr=0;
            if(vr>ml)ml=vr;
        }
        cout<<ml<<endl;
    }
    return 0;
}
