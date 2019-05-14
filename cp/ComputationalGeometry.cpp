#include <bits/stdc++.h>

using namespace std;

#define err pow(10,-9)
#define pi acos(-1.0)

//point
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
//poligon vector
using vp = vector<pdou>;
//line
struct line{
    double a,b,c;
    line(double ia,double ib,double ic):a(ia),b(ib),c(ic){}

};
//vector
struct vec{
    double x,y;
    vec(double ix,double iy):x(ix),y(iy){}
};
//returns line from two points
line ptoline(pdou p1,pdou p2){
    double a,b,c;
    if(fabs(p1.x-p2.x)<err){
        a=1;b=0;c=-p1.x;
    }else{
        a = -(double)(p1.y-p2.y)/(p1.x-p2.x);
        b = 1;
        c = -(double)(a*p1.x)-p1.y;
    }
    return line(a,b,c);
}
//euclidian distance of 2 points
double ddou(pdou p1,pdou p2){return hypot(p1.x-p2.x,p1.y-p2.y);}
//rotate point angd degrees
pdou protate(pdou p,double angd){
    double angr = angd*(pi/180.0);
    return pdou(p.x*cos(angr)-p.y*sin(angr),
                p.x*sin(angr)+p.y*cos(angr));
}
//test if lines are parallel
bool paraline(line l1,line l2){
    return (fabs(l1.a-l2.a)<err&&fabs(l1.b-l2.b)<err);
}
//test if lines are equal
bool equalline(line l1,line l2){
    return (paraline(l1,l2)&&fabs(l1.c-l2.c)<err);
}
//point of intersection of two lines
pdou intersecline(line l1,line l2){
    double x,y;
    x=(l2.b*l1.c-l1.b*l2.c)/(l2.a*l1.b-l1.a*l2.b);
    if(fabs(l1.b)>err)y=-(l1.a*x+l1.c);
    else y=-(l2.a*x+l2.c);
    return pdou(x,y);
}
//point to vector
vec tovec(pdou p1,pdou p2){return vec(p2.x-p1.x,p2.y-p1.y);}
//scale vector by factor
vec scale(vec v, double s){return vec(v.x*s,v.y*s);}
//translate point by vector
pdou travec(pdou p,vec v){return pdou(p.x+v.x,p.y+v.y);}
//dot product of two vectors
double dotprod(vec v1,vec v2){return v1.x*v2.x+v1.y*v2.y;}
//take the norm of vector
double norma(vec v){return v.x*v.x+v.y*v.y;}
//minimal distance from point to line defined by 2 points
double distptol(pdou p,pdou pl1,pdou pl2){
    vec ap = tovec(pl1,p), ab = tovec(pl1,pl2);
    double u = dotprod(ap,ab)/norma(ab);
    pdou c = travec(pl1,scale(ab,u));
    return ddou(p,c);
}
//minimal distance from point to segment of line defined by 2 points
double distptos(pdou p,pdou pl1,pdou pl2){
    vec ap = tovec(pl1,p), ab = tovec(pl1,pl2);
    double u = dotprod(ap,ab)/norma(ab);
    if(u<0.0){
        return ddou(p,pl1);
    }
    if(u>1.0){
        return ddou(p,pl2);
    }
    return distptol(p,pl1,pl2);
}
//angle between three points of lines OA and OB
double pangle(pdou p1,pdou o,pdou p2){
    vec oa = tovec(o,p1); vec ob = tovec(o,p2);
    return acos(dotprod(oa,ob)/sqrt(norma(oa)*norma(ob)));
}
//magnitude of cross product of vectors
double crossprod(vec v1,vec v2){return v1.x*v2.y-v1.y*v2.x;}
//sign of vectorial product of vector p1->p and vector p->p2, 1 -> positive, 0 -> negative
bool vecprodsig(pdou p1, pdou p, pdou p2){return crossprod(tovec(p1,p),tovec(p,p2))>0;}
//check for collinearity between 3 points
bool pcollinear(pdou p,pdou p1,pdou p2){return fabs(crossprod(tovec(p,p1),tovec(p,p2)))<err;}
//point and circunference status, 1=border, 2=in,0=out
int pdoucstatus(pdou c,double r,pdou p){
    double d = ddou(c,p);
    return d-r<err?1:d>r?0:2;
}
//circunference chord length
double chord(double r, double ang){
    ang = ang*pi/180.0;
    return sqrt(2*r*r*(1-cos(ang)));
}
//from 2 points forming a line, returns the points of circunference of r radius crossing line
pdou segtocirc(pdou p1,pdou p2,double r){
    double d2 = (p1.x-p2.x)*(p1.x-p2.x)+
                (p1.y-p2.y)*(p1.y-p2.y);
    double det = r*r/d2-0.25;
    double h = sqrt(det);
    double x = (p1.x+p2.x)*0.5+(p1.y-p2.y)*h;
    double y = (p1.y+p2.y)*0.5+(p2.x-p1.x)*h;
    return pdou(x,y);
}
//returns the middle point between two others
pdou pavg(pdou p1,pdou p2){
    return pdou((p1.x+p2.x)/2.0,(p1.y+p2.y)/2.0);
}
//returns the other point of segtocircle()
pdou segtocircother(pdou seg1,pdou p1,pdou p2){
    vec v = tovec(seg1,pavg(p1,p2));
    return travec(seg1,scale(v,2));
}
//tringle area from 3 points
double triangarea(pdou p1,pdou p2,pdou p3){
    double a = ddou(p1,p2);
    double b = ddou(p1,p3);
    double c = ddou(p3,p2);
    double p = (a+b+c)*0.5;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
//radius of inscribed circle
double radinsc(pdou p1,pdou p2,pdou p3){
    double a = ddou(p1,p2);
    double b = ddou(p1,p3);
    double c = ddou(p3,p2);
    double ar = triangarea(p1,p2,p3);
    return ar/(0.5*(a+b+c));
}
//center of inscribed circle
pdou ptinsc(pdou p1,pdou p2,pdou p3){
    double rat=ddou(p1,p2)/ddou(p1,p3);
    pdou p = travec(p2,scale(tovec(p2,p3),rat/(1+rat)));
    line l1 = ptoline(p1,p);
    rat=ddou(p2,p1)/ddou(p2,p3);
    p = travec(p1,scale(tovec(p1,p3),rat/(1+rat)));
    line l2 = ptoline(p1,p);
    return intersecline(l1,l2);
}
//radius of circunscribed circle
double radcirc(pdou p1,pdou p2,pdou p3){
    double a = ddou(p1,p2);
    double b = ddou(p1,p3);
    double c = ddou(p3,p2);
    return a*b*c/(4.0*triangarea(p1,p2,p3));
}
//center of circunscribed circle
pdou ptcirc(pdou p1,pdou p2,pdou p3){
    pdou a = segtocirc(p1,p2,ddou(p1,p2)*1.5);
    pdou b = protate(a,180);
    line l1 = ptoline(a,b);
    pdou c = segtocirc(p2,p3,ddou(p2,p3)*1.5);
    pdou d = protate(c,180);
    line l2 = ptoline(c,d);
    return intersecline(l1,l2);
}
//triangle angle of point p1 by cosine law
double triaangcos(pdou p1,pdou p2,pdou p3){
    double a = ddou(p1,p2);
    double b = ddou(p1,p3);
    double c = ddou(p3,p2);
    return acos((a*a+b*b-c*c)/(2.0*a*b))*180.0/pi;
}
//triangle angle of point p1 by sine law
double triaangsin(pdou p1,pdou p2,pdou p3){
    return asin(ddou(p2,p3)/(2.0*radcirc(p1,p2,p3)))*180.0/pi;
}

//forms a poligon from points input (np = number of points)
vp read_shape(int np){
    vp out;
    double a,b;
    for(int i=0;i<np;i++){
        cin>>a>>b;
        out.push_back(pdou(a,b));
    }
    out.push_back(out[0]);
    return out;
}
//returns poligon perimeter
double poligperim(const vp &P){
    double sum=0;
    int t = P.size();
    for(int i=0;i<t-1;i++){
        sum+=ddou(P[i],P[i+1]);
    }
    return sum;
}
//poligonal area from sum of vector signed areas
double poligarea(const vp &P){
    double sum=0,x1,y1,x2,y2;
    int t = P.size();
    for(int i=0;i<t-1;i++){
        x1 = P[i].x;
        x2 = P[i+1].x;
        y1 = P[i].y;
        y2 = P[i+1].y;
        sum += (x1*y2-x2*y1);
    }
    return sum/2.0;
}
//boolean check for convex poligon
bool poligconvex(const vp &P){
    int t = P.size();
    bool init = vecprodsig(P[0],P[1],P[2]);
    for(int i=2;i<t-1;i++){
        if(vecprodsig(P[i-1],P[i],P[i+1])!=init)return false;
    }
    return true;
}
//checks if point is inside poligon
bool poliginside(const vp &P, pdou p){
    double sum=0;
    int t = P.size();
    for(int i=0;i<t-1;i++){
        if(vecprodsig(P[i],p,P[i+1])) sum+=pangle(P[i],p,P[i+1]);
        else sum-=pangle(P[i],p,P[i+1]);
        if(isnan(sum))return true;
    }
    return fabs(fabs(sum)-2.0*pi)<err;
}
//segment p-q intersection point with line a-b
pdou linesegp(pdou p,pdou q,pdou a,pdou b){
    double v1 = b.y-a.y;
    double v2 = a.x-b.x;
    double v3 = b.x*a.y-a.x*b.y;
    double u = fabs(v1*p.x+v2*p.y+v3);
    double v = fabs(v1*q.x+v2*q.y+v3);
    return pdou((p.x*v+q.x*u)/(u+v),(p.y*v+q.y*u)/(u+v));
}
//returns polygon from line cut a-b
vp poligcut(const vp &P, pdou a,pdou b){
    vp R;
    int t = P.size();
    for(int i=0;i<t;i++){
        double v1 = crossprod(tovec(a,b),tovec(a,P[i])),v2=0;
        if(i!=t-1)v2=crossprod(tovec(a,b),tovec(a,P[i+1]));
        if(v1>-err)R.push_back(P[i]);
        if(v1*v2<-err)R.push_back(linesegp(P[i],P[i+1],a,b));
    }
    if(!R.empty()&&!(R.back()==R.front()))R.push_back(R.front());
    return R;
}
//compares which angle is the leftmost ]
pdou piv = pdou(0,0);
bool anglecompare(pdou a,pdou b){
    if(pcollinear(piv,a,b))return ddou(piv,a)<ddou(piv,b);
    double d1x  = a.x-piv.x,d1y = a.y-piv.y;
    double d2x = b.x-piv.x,d2y=b.y-piv.y;
    return (atan2(d1y,d1x)-atan2(d2y,d2x))<0;
}
//convex hull from vector of points
vp convexhull(vp P){
    int i,j,n=P.size();
    if(n<=3){if(!(P[0]==P[n-1]))P.push_back(P[0]);return P;}
    int p0 = 0;
    for(i=1;i<n;i++)
        if(P[i].y<P[p0].y||(P[i].y==P[p0].y&&P[i].x>P[p0].x))
            p0=i;
    pdou temp = P[0];P[0]=P[p0];P[p0]=temp;
    piv = P[0];
    sort(++P.begin(),P.end(),anglecompare);
    vp S;
    S.push_back(P[n-1]);
    S.push_back(P[0]);
    S.push_back(P[1]);
    i=2;
    while(i<n){
        j=S.size()-1;
        if(vecprodsig(S[j-1],S[j],P[i]))S.push_back(P[i++]);
        else S.pop_back();
    }
    return S;
}

void printline(line l){cout<<"Line a = "<<l.a<<" Line b = "<<l.b<<" Line c = "<<l.c<<endl;}
void printpdou(pdou p){cout<<"Point x = "<<p.x<<" Point y = "<<p.y<<endl;}
void printvec(vec v){cout<<"Component x = "<<v.x<<" Component y = "<<v.y<<endl;}

int main(){
    int n,x,y;
    cin>>n;
    vp p;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        p.push_back(pdou(x,y));
    }
    vp ch = convexhull(p);
    cout<<"Convex hull"<<endl;
    for(int i=0;i<ch.size()-1;i++)cout<<ch[i].x<<" "<<ch[i].y<<endl;
    return 0;
}
