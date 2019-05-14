#include <bits/stdc++.h>

using namespace std;

#define err pow(10,-9)
#define pi acos(-1.0)

struct pdou{
    double x,y;
    pdou(double _x,double _y):x(_x),y(_y){}
    bool operator < (pdou sec) const{
        if(fabs(x-sec.x)>err)return x < sec.x;
        else return y < sec.y;
    }
    bool operator == (pdou sec) const{
        return (fabs(x-sec.x)<err&&fabs(y-sec.y)<err);
    }
};

struct vec{
    double x,y;
    vec(double ix,double iy):x(ix),y(iy){}
};

vec tovec(pdou p1,pdou p2){return vec(p2.x-p1.x,p2.y-p1.y);}

double crossprod(vec v1,vec v2){return v1.x*v2.y-v1.y*v2.x;}

bool pcollinear(pdou p,pdou p1,pdou p2){
    return fabs(crossprod(tovec(p,p1),tovec(p,p2)))<err;}

int c,p,v,ca=1,ans;double x,y;

set<pdou> pts;
vector<pdou> lp;

int main(){
    scanf("%d",&c);
    while(c--){
        scanf("%d",&p);
        ans=2;
        for(int i=0;i<p;i++){
            scanf("%lf%lf",&x,&y);
            pts.insert(pdou(x,y));
        }
        for(auto v: pts)lp.push_back(v);
        p=lp.size();
        if(p>1)
        for(int i=0;i<p;i++)
            for(int j=i+1;j<p;j++){
                v=2;
                for(int k=j+1;k<p;k++){

                    if(pcollinear(lp[i],lp[j],lp[k])){
                            v++;
                    }
                }
                ans=max(ans,v);
            }
        if(c)
            pts.clear(),lp.clear();
        if(p>1)printf("Data set #%d contains %d gnus, out of which a maximum of %d are aligned.\n",
                               ca++,p,ans);
        else printf("Data set #%d contains a single gnu.\n",ca++);
    }
    return 0;
}
