#include <bits/stdc++.h>

using namespace std;

int ev[51][3];

float updtfc(int n){
        return float(n)/100.0;}

bool goal(int n, int ifc,float gas,int fd){
    float cg = gas;
    float fc = updtfc(ifc);
    bool val=1;
    int d = 0;
    int lk=0;
    for(int i=0;i<n;i++){
        cg -= float(ev[i][1]-d)*(fc+lk);
        d=ev[i][1];
        if(cg<0){val=0;break;}
        switch(ev[i][0]){
        case 1:
            fc = updtfc(ev[i][2]);
            break;
        case 2:
            cg = gas;
            break;
        case 3:
            lk++;
            break;
        case 4:
            lk=0;
            break;
        }
    }
    cg -= float(fd-d)*(fc+lk);
    if(cg<0)val=0;
    return val;
}

float updtg(float a,float b){
        return (a+b)/2.0;}

int main(){
    int p,fc;
    string x;
    while(cin>>p>>x>>x>>fc,bool(p+fc)){
        int n=0,v,s;
        while(cin>>v>>x,x!="Goal"){
            if(x=="Fuel"){
                cin>>x>>s;
                ev[n][0]=1;
                ev[n][2]=s;
            }else if(x=="Gas"){
                cin>>x;
                ev[n][0]=2;
            }else if(x=="Leak"){
                ev[n][0]=3;
            }else{
                ev[n][0]=4;
            }
            ev[n][1]=v;
            n++;
        }
        float ib=0,ia=100000.00;
        float gas=updtg(ia,ib);
        for(int i=0;i<48;i++){
            bool r = goal(n,fc,gas,v);
            if(!r){ ib = gas;}
            else {ia = gas;}
            gas = updtg(ia,ib);
        }
        printf("%.3f\n",gas);
    }
    return 0;
}
