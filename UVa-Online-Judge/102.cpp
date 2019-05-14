#include <bits/stdc++.h>
using namespace std;

int unb[3][3];
int mb[9];
int posc[6][3] = {{0,2,1},{0,1,2},{2,0,1},{2,1,0},{1,0,2},{1,2,0}};
char ord[3] = {'B','G','C'};

int main()
{
    while(cin>>unb[0][0],!cin.eof()){
        for(int i=0;i<3;i++)for(int j=0;j<3;j++){
            if(j==0&&i==0)continue;
            cin>>unb[i][j];
        }
        memset(mb,0,sizeof mb);
        int ms,esc;
        for(int i=0;i<6;i++){
            int cs=0;
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(k!=posc[i][j])cs+=unb[j][k];
                }
            }
            if(i==0||cs<ms){ms=cs;esc=i;}
        }
        for(int i=0;i<3;i++){
            cout<<ord[posc[esc][i]];
        }
        cout<<" "<<ms<<endl;
    }
    return 0;
}

