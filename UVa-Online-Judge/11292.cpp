#include <bits/stdc++.h>

using namespace std;

#define inf 100000000

int dh[20010];

vector<int> kh;

int main(){
    int n,m,x;
    while(cin>>n>>m,bool(n+m)){
        bool val=1;
        if(n>m)val=0;
        for(int i=0;i<n;i++)cin>>dh[i];
        for(int i=0;i<m;i++){cin>>x;kh.push_back(x);}
        int gc=0;
        if(val){
            sort(dh,dh+n);sort(kh.begin(),kh.end());
            for(int i=n-1;i>=0;i--){
                int khs = kh.size();
                int ind = 0;
                bool pos = 0;
                while(khs-1-ind>=0&&kh[khs-1-ind]>=dh[i]){ind++;pos=1;}
                if(!pos){val=0;break;}
                gc+=kh[khs-ind];
                kh.erase(kh.begin()+khs-ind);
            }
        }
        if(val)cout<<gc<<endl;
        else cout<<"Loowater is doomed!\n";
        kh.clear();
    }
    return 0;
}
