#include <bits/stdc++.h>

using namespace std;

int s,w,k,x,y;

struct point{
	int x,y;
	point(int _x,int _y):x(_x),y(_y){}
	bool operator == (point other) const{
		return (abs(x-other.x)==0&&abs(y-other.y)==0);}
};

struct line{
	double a,b,c;
	line(double _a,double _b,double _c):a(_a),b(_b),c(_c){}
};

line toline(point a,point b){
	double la,lb,lc;
	if(abs(a.x-b.x)==0){
		la=1.0;lb=0.0;lc=-a.x;
	}else{
		la=-(double)(a.y-b.y)/double(a.x-b.x);
		lb=1.0;
		lc=-(double)(la*a.x)-a.y; 
	}
	return line(la,lb,lc);
}

bool areparallel(line l1,line l2){
	return (fabs(l1.a-l2.a)<10e-9)&&(fabs(l1.b-l2.b)<10e-9);}

pair<double,double> intersect(line l1,line l2){
	if(areparallel(l1,l2))return make_pair(-69,-420);
	double px,py;
	px=(l2.b*l1.c-l1.b*l2.c)/(l2.a*l1.b-l1.a*l2.b);
	if(fabs(l1.b)>10e-9)py=-(l1.a*px+l1.c);
	else py=-(l2.a*px+l2.c);
	return make_pair(px,py);
}

struct vec{
	int x,y; vec(int _x,int _y):x(_x),y(_y){}
};

double dist(point a,point b){
	return hypot(a.x-b.x,a.y-b.y);}

double dist(point a,pair<double,double> b){
	return hypot(a.x-b.first,a.y-b.second);}


vec tovec(point a,point b){
	return vec(b.x-a.x,b.y-a.y);}

int cross(vec a,vec b){return a.x*b.y-a.y*b.x;}

bool ccw(point p, point q,point r){
	return cross(tovec(p,q),tovec(p,r))>0;}

bool collinear(point p,point q,point r){
	return abs(cross(tovec(p,q),tovec(p,r)))==0;}

vec scale(vec v, double s){return vec(v.x*s,v.y*s);}

point travec(point p,vec v){return point(p.x+v.x,p.y+v.y);}

double dotprod(vec v1,vec v2){return v1.x*v2.x+v1.y*v2.y;}

double norma(vec v){return v.x*v.x+v.y*v.y;}

double pangle(point p1,point o,point p2){
    vec oa = tovec(o,p1); vec ob = tovec(o,p2);
    return acos(dotprod(oa,ob)/sqrt(norma(oa)*norma(ob)));
}

vector<point> K;
vector<pair<point,point>> W;
int sktosk[11][11];

pair<double,double> inter;
bool los;
int mix,mxx,miy,myy,mix2,mxx2,miy2,myy2,nk;

int main(){
	while(scanf("%d%d%d",&s,&k,&w)!=EOF){
		memset(sktosk,-1,sizeof sktosk);
		W.clear();K.clear();
		for(int i=0;i<k;i++){
			scanf("%d%d",&x,&y);
			K.push_back(point(x,y));
		}
		for(int i=0;i<w;i++){
			scanf("%d%d",&x,&y);
			point p1 = point(x,y);
			scanf("%d%d",&x,&y);
			W.push_back(make_pair(p1,point(x,y)));
		}
		for(int i=0;i<s;i++){
			//cout<<"Seeker "<<i<<endl;
			nk=0;
			for(int j=0;j<k;j++){
				//cout<<"Hider "<<j<<endl;
				if(i==j)continue;
				los=0;
				line kk = toline(K[i],K[j]);
				if(i<s&&j<s&&sktosk[i][j]!=-1)los=sktosk[i][j];
				else for(int ki=0;ki<w;ki++){
					line ww = toline(W[ki].first,W[ki].second);
					inter = intersect(kk,ww);
					//cout<<"WALL "<<ki<<" INTERSEC POINT: "<<inter.first<<" "<<inter.second<<endl;
					if(inter.first==-69&&inter.second==-420)continue;
					mix=min(K[i].x,K[j].x);
					mxx=max(K[i].x,K[j].x);
					miy=min(K[i].y,K[j].y);
					myy=max(K[i].y,K[j].y);
					mix2=min(W[ki].first.x,W[ki].second.x);
					mxx2=max(W[ki].first.x,W[ki].second.x);
					miy2=min(W[ki].first.y,W[ki].second.y);
					myy2=max(W[ki].first.y,W[ki].second.y);
					if(inter.first>=mix&&inter.first<=mxx&&
					   inter.second>=miy&&inter.second<=myy&&
				           inter.first>=mix2&&inter.first<=mxx2&&
					   inter.second>=miy2&&inter.second<=myy2&&
					   dist(K[i],K[j])>dist(K[i],inter)
					   ){los=1;break;}
				}
				if(i<s&&j<s)sktosk[j][i]=los;
				if(!los)nk++;
			}	
			printf("%d\n",nk);	
		}
	}
}
