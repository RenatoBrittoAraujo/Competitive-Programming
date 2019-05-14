#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int r[9][9];
        for(int i=1;i<=9;i+=2){
            for(int j=0;j<i;j+=2){
                cin>>r[i-1][j];
            }
        }
        for(int i=8;i>0;i-=2){
            int ca = i/2;
            if(ca==3)ca++;if(ca==4)ca+=2;
            for(int j=0;j<=ca;j+=2){
                int re=r[i-2][j]-r[i][j]-r[i][j+2];
                re/=2;
                r[i][j+1]=re;
            }
        }
        for(int i=7;i>0;i-=2){
            for(int j=0;j<=i;j++){
                int re=r[i+1][j]+r[i+1][j+1];
                r[i][j]=re;
            }
        }
        for(int i=1;i<=9;i++){
            for(int j=0;j<i;j++){
                cout<<r[i-1][j];
                if(j!=i-1)cout << " ";
            }cout << endl;
        }
    }
    return 0;
}
