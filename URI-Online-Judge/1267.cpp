#include <iostream>

using namespace std;

int main()
{
    int n,d;
    while(cin>>n>>d,bool(n+d)){
        bool par=false;
        int p[d][n];
        for(int i=0;i<d;i++){
            for(int j=0;j<n;j++){
                cin>>p[i][j];
            }
        }
        for(int i=0;i<n;i++){
            int sa=0;
            for(int j=0;j<d;j++){
                sa+=p[j][i];
            }
            if(sa==d){par=true;break;}
        }
        if(par)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
