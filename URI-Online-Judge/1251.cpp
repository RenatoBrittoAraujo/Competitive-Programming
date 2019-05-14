#include <bits/stdc++.h>

using namespace std;

int vc[129-31];

int main(){
    string a;bool c=0;
    while(getline(cin,a),!cin.eof()){
        set<int> im[1001];
        if(c)cout<<endl;
        c=1;
        memset(vc,0,sizeof vc);
        for(int i=0;i<a.size();i++){
            vc[int(a[i])-32]++;
        }
        for(int i=128-32-1;i>=0;i--){
            if(vc[i]>0)im[vc[i]].insert(-(i+32));
        }
        for(int i=1;i<1000;i++){
            if(im[i].size()>0){
                for(auto j: im[i])cout<<-j<<" "<<i<<endl;
            }
        }
    }
    return 0;
}
