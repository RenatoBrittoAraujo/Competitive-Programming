#include <iostream>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m,!cin.eof()){
        int t[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> t[i][j];
            }
        }
        int s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                s=0;
                if(t[i][j]==1)s=9;
                else{
                    if(i+1<=n-1)s+=t[i+1][j];
                    if(i-1>=0)s+=t[i-1][j];
                    if(j+1<=m-1)s+=t[i][j+1];
                    if(j-1>=0)s+=t[i][j-1];
                }
                cout << s;
            }cout << "\n";
        }

    }
    return 0;
}
