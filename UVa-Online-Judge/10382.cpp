#include <bits/stdc++.h>

#define ff pair<double,double>

using namespace std;

long long int w,l,n;

using lli = long long int;

double cd(double r){
    double v = double(r*r)-double(w*w)/4.0;
    //cout<<r*r<<endl;
    //cout<<w*w/4.0<<endl;
    //cout<<r*r-w*w/4.0<<endl;
    //cout<<sqrt(r*r-w*w/4.0)<<endl;
    if(v<=0)return 0;
    else return sqrt(v);
}

vector<ff> in;

int main(){
    double x,y;
    while(cin>>n>>l>>w,!cin.eof()){
        for(int i=0;i<n;i++){
            cin>>y>>x;x=cd(x);
            in.push_back(ff(y-x,y+x));
        }
        sort(in.begin(),in.end());
        int msp = 1;
        double ihb=0;
        bool val=1;
        int str=0;
        while(1){
            int ind=-1;double mr=ihb;
            for(int j=str;j<n;j++){
                double v = in[j].first;
                if(v>ihb){str=j;break;}
                if(in[j].second>mr){
                    mr = in[j].second;
                    ind = j;
                }
            }
            if(ind==-1){val=0;break;}
            else{
                //cout<<"Picked index = "<<ind<<" -> ["<<in[ind].first<<","<<lli(in[ind].second)<<"]\n";
                ihb = mr;
                if(ihb>=l)break;
                msp++;
            }
        }
        if(!val)cout<<-1<<endl;
        else cout<<msp<<endl;
        in.clear();
    }
    return 0;
}
