#include <bits/stdc++.h>

using namespace std;

int c,e,b,a;

long long int pg[600];

long long int lo,hi,m;

vector<long long int> ans;

bool ass(bool fr){
    int rm = b-1,ss=e-1;bool eq=0;long long int cs=0;
    while(rm>-1&&ss>-1){
        //if(fr)cout<<rm<<" "<<ss<<endl;
        if(ss==rm&&fr&&ss!=1&&cs+pg[rm]<=m){eq=1;break;}
        if(cs+pg[rm]<=m){
            cs+=pg[rm--];if(fr)ans.push_back(pg[rm+1]);}
        else{
            //if(fr)cout<<"Aqui\n";
            cs=0;ss--;if(fr)ans.push_back(-1);
        }
    }
    if(eq&&fr){
        if(cs>m)ans.push_back(-1);
        while(rm>-1){ans.push_back(pg[rm--]);
                    if(rm>-1)ans.push_back(-1);}
    }
    if(rm==-1)return 1;
    else return 0;
}

int main(){
    cin>>c;
    while(c--){
        ans.clear();
        cin>>b>>e;
        lo=100000000000,hi=0;
        for(int i=0;i<b;i++)
            cin>>pg[i];
        for(int i=0;i<40;i++){
            m=(lo+hi)/2;
            if(ass(0))lo=m;
            else hi=m;
            //cout<<m<<endl;
        }
        lo=m;
        m=(lo+hi)/2+1;
        ass(1);
        int t = ans.size();
        reverse(ans.begin(),ans.end());
        for(int i=0;i<t;i++){
            if(ans[i]!=-1)cout<<ans[i];
            else cout<<"/";
            ans.pop_back();
            if(i!=t-1)cout<<" ";
        }cout<<endl;
    }
    return 0;
}
