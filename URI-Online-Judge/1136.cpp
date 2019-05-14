#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,b;
    while(cin>>n>>b,bool(n+b)){
        vector<int> bo;int x;
        for(int i=0;i<b;i++){cin>>x;bo.push_back(x);}
        bool d=true;
        for(int k=0;k<=n;k++){
            bool di=false;
            for(int i=0;i<b;i++){
                for(int j=i;j<b;j++){
                    if(abs(bo[i]-bo[j])==k){di=true;break;}
                }if(di)break;
            }
            if(!di){d=false;break;}
        }
        if(d)cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
}

