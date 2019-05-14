#include <bits/stdc++.h>

using namespace std;

char board[15][15];

int co,n;

bitset<30> rw,ld,rd;

void bc(int c){
    if(c==n){co++;return;}
    for(int r=0;r<n;r++){
        if(board[r][c]!='*'&&!rw[r]&&!ld[r-c+n-1]&&!rd[r+c]){
            rw[r] = ld[r-c+n-1] = rd[r+c] = 1;
            bc(c+1);
            rw[r] = ld[r-c+n-1] = rd[r+c] = 0;
        }
    }
}

int main(){
    int ca=1;
    while(cin>>n,n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>board[i][j];
            }
        }
        co=0;
        bc(0);
        cout<<"Case "<<ca<<": "<<co<<endl;
        ca++;
    }
    return 0;
}
