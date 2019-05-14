#include <bits/stdc++.h>

using namespace std;

int pd[1030][1030];

int main(){
    int ca;
    cin>>ca;
    while(ca--){
        int d;
        memset(pd,0,sizeof pd);
        cin>>d;
        int n;
        cin>>n;
        int a,b,c;
        int mxs=0,mys=0;
        for(int i=0;i<n;i++){
            cin>>a>>b>>c;
            a--;b--;
            if(a+d>mxs)mxs = a+d;
            if(b+d>mys)mys = b+d;
            for(int j=max(a-d,0);j<1025&&j<=a+d;j++){
                for(int k=max(b-d,0);k<1025&&k<=b+d;k++){
                    pd[j][k]+=c;
                }
            }
        }
        mxs = min(1024,mxs);
        mys = min(1024,mys);
        int vx,vy;
        int amount_of_dead_rats_i_fucking_hate_rats = 0;
        for(int i=0;i<mxs;i++){
            for(int j=0;j<mys;j++){
                if(pd[i][j]>amount_of_dead_rats_i_fucking_hate_rats){
                    amount_of_dead_rats_i_fucking_hate_rats = pd[i][j];
                    vx = i;
                    vy = j;
                }
            }
        }
        cout<<++vx<<" "<<++vy<<" "<<amount_of_dead_rats_i_fucking_hate_rats<<endl;
    }
    return 0;
}
