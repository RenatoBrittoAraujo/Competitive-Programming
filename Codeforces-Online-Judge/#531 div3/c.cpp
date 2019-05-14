#include <bits/stdc++.h>

using namespace std;



int main(){
    int n,x,y,in;
    cin>>n>>x>>y;
    int cont=0;
    for(int i=0;i<n;i++){
        cin>>in;
        if(in<=x)cont++;
    }
    if(x>y)cout<<n<<endl;
    if(cont%2!=0)cont++;
    if(x<=y)cout<<cont/2<<endl;
    return 0;
}