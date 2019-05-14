#include <bits/stdc++.h>

using namespace std;
#define maxn 100010
string T,P;
int b[maxn],n,m;

void kmpprepro(){
    int i=0,j=-1;b[0]=-1;
    while(i<m){
    while(j>=0&&P[i]!=P[j])j=b[j];
    i++;j++;
    b[i]=j;
    }
}

void kmpsearch(){
    int i=0,j=0;
    while(i<n){
        cout<<"searching "<<i<<"...\n";
        while(j>=0&&T[i]!=P[j])j=b[j];
        i++;j++;
        if(j==m){
            cout<<"Found "<<i-j<<endl;
            j=b[j];
        }
    }
}

int main(){
    while(1){
        getline(cin,T);
        getline(cin,P);
        m=P.size();
        n=T.size();
        kmpprepro();
        kmpsearch();
    }
    return 0;
}
