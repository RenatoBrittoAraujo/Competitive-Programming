#include <bits/stdc++.h>

using namespace std;

int main(){
    int fa[3],fi[3];
    while(cin>>fa[0]>>fa[1]>>fa[2]>>fi[0]>>fi[2],bool(fa[0]+fa[1]+fa[2]+fi[0]+fi[2])){
        fi[1]=0;
        vector<int> esc;
        for(int i=0;i<3;i++){
            esc.push_back(fa[i]);
            if(i!=1)esc.push_back(fi[i]);
        }
        sort(fa,fa+3);
        if(fi[2]<fi[0]){
            int t=fi[2];
            fi[2]=fi[0];
            fi[0]=t;
        }
        /*for(int i=0;i<3;i++){
            cout<<fa[i]<<" "<<fi[i]<<endl;
        }*/
        int p=0;
        for(int i=0;i<3;i++){
            if(fi[0]>fa[i])p++;
            if(fi[2]>fa[i])p++;
        }
        if(p<3)cout<<-1<<endl;
        else{
            int v;
            if(p<6)v = fa[1]+1;
            else v=1;
            bool nv=false;
            if(fa[0]>fi[0]||fa[1]>fi[0]){
                int cmo=0;
                for(int i=0;i<3;i+=2){
                    bool p=1;
                    for(int j=0;j<3;j++){
                        if(fi[i]<fa[j])p=0;
                    }
                    if(p)cmo++;
                }
                if(cmo==1)v=fa[2]+1;
            }
            while(!nv){
                nv=true;
                for(auto i: esc){if(v==i){v++;nv=false;}}
            }
            //fi[1]=v;
            bool g=true;
            if(fa[2]>fi[2]&&fa[1]>fi[0])g=false;
            if(v>52||!g)cout<<-1<<endl;
            else cout<<v<<endl;
        }
    }
    return 0;
}
