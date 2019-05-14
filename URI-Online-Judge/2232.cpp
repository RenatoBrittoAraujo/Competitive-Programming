#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        long long int v=0;
        for(int i=0;i<n;i++){
            v+=pow(2,i);
        }
        cout<<v<<endl;
    }
    return 0;
}
