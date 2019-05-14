#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[3];
    while(cin>>n[0]>>n[1]>>n[2],!cin.eof()){
        bool pi=false;
        bool pr=true;

        for(int i=0;i<3;i++){
            for(int j=i+1;j<3;j++){
                if(n[i]<n[j]){
                    int t = n[i];
                    n[i]=n[j];
                    n[j]=t;
                }
            }
        }

        if(n[0]*n[0]==n[1]*n[1]+n[2]*n[2])pi=true;

        int mi = sqrt(min(n[1],n[2]))+1;

        for(int i=2;i<=mi;i++){
            if(n[0]%i==0&&n[1]%i==0&&n[2]%i==0){
                pr=false;
                break;
            }
        }

        cout<<"tripla";
        if(pi)cout<<" pitagorica";
        if(pi&&pr)cout<<" primitiva";
        cout<<endl;
    }
    return 0;
}
