#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,m;
    while(cin >> n>>m,!cin.eof()){
    int a[n][m];
    int x1,y2,x2,y1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            if(a[i][j]==1){x1=i;y1=j;}
            if(a[i][j]==2){x2=i;y2=j;}
        }
    }
    int d = abs(x1-x2) + abs(y1-y2);
    cout << d << endl;
    }
    return 0;
}
