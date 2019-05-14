#include <bits/stdc++.h>

using namespace std;

int main(){
    int w,h,u1,d1,u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    for(int i=h;i>=0;i--){
        //cout<<"Height "<<i<<" Weight "<<w<<endl;
        w+=i;
        if(d1==i){w-=u1;
            if(w<0)w=0;continue;
        }
        if(d2==i){w-=u2;
            if(w<0)w=0;continue;
        }
    }
    cout<<w<<endl;
    return 0;
}