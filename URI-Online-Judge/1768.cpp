#include <bits/stdc++.h>

using namespace std;

void esp(int n){
    for(int i=0;i<n;i++)cout<<" ";
}

void ast(int n){
    for(int i=0;i<n;i++)cout<<"*";
}

int main(){
    int n;
    while(cin>>n,!cin.eof()){
        int e=n/2;
        for(int i=e+1;i>0;i--){
            esp(i-1);
            ast((e+2-i)*2-1);
            cout<<endl;
        }
        esp(e);
        ast(1);
        cout<<endl;
        esp(e-1);
        ast(3);
        cout<<endl<<endl;
    }
    return 0;
}
