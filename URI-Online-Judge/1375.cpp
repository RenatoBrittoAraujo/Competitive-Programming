#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int gf[n][2];
        int s=0;
        bool val = true;
        int x,y;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            gf[i][0]=x;gf[i][1]=y;
            s+=y;
            if(i+y<0||i+y>=n)val = false;
        }
        if(s!=0||!val)cout << "-1\n";
        else{
            int r[n]={0};
            for(int i=0;i<n;i++){
                r[i+gf[i][1]]=gf[i][0];
            }
            bool val2 = true;
            for(int i=0;i<n;i++){
                if(r[i]==0){val2=false;break;}
            }
            if(!val2)cout << "-1";
            else for(int i=0;i<n;i++){
                cout << r[i];
                if(i!=n-1)cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
