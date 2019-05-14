#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t=1;
    while(cin>>n,n){
        int no[n],ma[n],mm=0;
        for(int i=0;i<n;i++){
            cin>>ma[i]>>no[i];
            if(no[i]>mm)mm=no[i];
        }
        cout<<"Turma "<<t<<endl;
        for(int i=0;i<n;i++){
            if(no[i]==mm)cout<<ma[i]<<" ";
        }
        cout<<endl<<endl;
        t++;
    }
    return 0;
}
