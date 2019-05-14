#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> od;
    while(cin>>n,!cin.eof()){
        od.clear();
        int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            for(int j=a;j<=b;j++)od.push_back(j);
        }
        int q;
        cin>>q;
        int in=-1,f=-1;
        sort(od.begin(),od.end());
        for(int i=0;i<od.size();i++){
            if(in==-1&&od[i]==q)in=i;
            else if(in!=-1&&od[i]!=q){f=i-1;break;}
        }
        if(in!=-1&&f==-1)f=od.size()-1;
        if(in!=-1)cout<<q<<" found from "<<in<<" to "<<f<<endl;
        else cout<<q<<" not found\n";
    }
    return 0;
}
