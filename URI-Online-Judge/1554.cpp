#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        double bx,by;
        cin>>bx>>by;
        double md,d,x,y;
        int in;
        for(int i=1;i<=n;i++){
            cin>>x>>y;
            d=sqrt(pow(x-bx,2)+pow(y-by,2));
            if(i==1||d+0.01<md){in=i;md=d;}
        }
        cout<<in<<endl;
    }
    return 0;
}
