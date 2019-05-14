#include <iostream>

using namespace std;

int main()
{
    int n,p;
    while(cin>>n>>p,bool(n+p)){
        bool s[n][p];
        bool c1=true,c2=true,c3=true,c4=true;
        int sp;
        for(int i=0;i<n;i++){
            sp=0;
            for(int j=0;j<p;j++){
                cin>>s[i][j];
                sp+=s[i][j];
            }
            if(sp==p)c1=false;
            if(sp==0)c4=false;
        }
        for(int i=0;i<p;i++){
            sp=0;
            for(int j=0;j<n;j++){
                sp+=s[j][i];
            }
            if(sp==n)c3=false;
            if(sp==0)c2=false;
        }
        int r = c1+c2+c3+c4;
        cout << r << endl;
    }
    return 0;
}
