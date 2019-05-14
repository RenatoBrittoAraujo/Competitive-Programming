#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cin >> c[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int s=0;
            for(int k=i;k<2+i;k++){
                for(int l=j;l<2+j;l++){
                    s+=c[k][l];
                }
            }
            if(s>1)cout << "S";
            else cout << "U";
        }cout << endl;
    }
    return 0;
}
