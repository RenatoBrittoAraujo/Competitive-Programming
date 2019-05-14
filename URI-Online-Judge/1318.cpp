#include <iostream>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m,bool(n+m)){
        int b[m][2];
        for(int i=0;i<m;i++){
            cin >> b[i][0];
            b[i][1]=1;
        }
        int nbf=0;
        for(int i=0;i<m;i++){
            bool cf=false;
            if(b[i][1]==1){
                for(int j=i+1;j<m;j++){
                    if(b[i][0]==b[j][0]&&b[j][1]==1){
                        b[j][1]=0;
                        cf=true;
                    }
                }
            }
            if(cf){b[i][1]=0;nbf++;}
        }
        cout << nbf << endl;
    }
    return 0;
}
