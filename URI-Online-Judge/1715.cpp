#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
    int j=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=0;j<m;j++){
            if(a[i][j]>0)s++;
        }if(s==m){j++;}
    }

    cout << j << endl;

    return 0;
}
