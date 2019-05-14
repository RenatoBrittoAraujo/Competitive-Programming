#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int q;
    cin>>q;
    string qu[q];
    for(int i=0;i<q;i++){
        cin>>qu[i];
    }
    for(int i=0;i<q;i++){
        int np=0,sp;
        int tq = qu[i].size();
        for(int j=0;j<n;j++){
            int ta = p[j].size();
            for(int k=0;k<ta-tq+1;k++){
                if(p[j][k]==qu[i][0]){
                    bool s=true;
                    for(int l=1;l<tq;l++){
                        if(p[j][k+l]!=qu[i][l])s=false;
                    }
                    if(s){
                        if(np==0||ta>sp)sp=ta;
                        np++;
                        break;
                    }
                }
            }
        }
        if(np>0)cout << np << " " << sp << endl;
        else cout << -1 << endl;
    }
    return 0;
}
