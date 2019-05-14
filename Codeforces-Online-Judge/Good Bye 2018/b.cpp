#include <bits/stdc++.h>

using namespace std;

int cl[1010][2];
int ob[1010][2];


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>ob[i][0]>>ob[i][1];
    for(int i=0;i<n;i++)cin>>cl[i][0]>>cl[i][1];
    int fx,fy;
    bool pos=0;
    for(int k=0;k<n&&!pos;k++)for(int l=0;l<n&&!pos;l++){
        if(k==l)continue;
        for(int i=0;i<n&&!pos;i++){
            fx = ob[k][0] + cl[i][0];
            fy = ob[k][1] + cl[i][1];
            for(int j=0;j<n;j++){
                if(i==j)continue;
                int nfx = ob[l][0]+cl[j][0];
                int nfy = ob[l][1]+cl[j][1];
                if(nfx==fx&&nfy==fy){pos=1;break;}
            }
        }
    }
    cout<<fx<<" "<<fy<<endl;
    return 0;
}