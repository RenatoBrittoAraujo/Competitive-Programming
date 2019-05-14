#include <bits/stdc++.h>

using namespace std;

struct point{
	int x,y;
	point(int _x,int _y):x(_x),y(_y){}
	bool operator == (point other) const{
		return (abs(x-other.x)==0&&abs(y-other.y)==0);}
};

struct vec{
	int x,y; vec(int _x,int _y):x(_x),y(_y){}
};

double dist(point a,point b){
	return hypot(a.x-b.x,a.y-b.y);}


vec tovec(point a,point b){
	return vec(b.x-a.x,b.y-a.y);}

int cross(vec a,vec b){return a.x*b.y-a.y*b.x;}

bool ccw(point p, point q,point r){
	return cross(tovec(p,q),tovec(p,r))>=0;}

bool collinear(point p,point q,point r){
	return abs(cross(tovec(p,q),tovec(p,r)))==0;}

point pivot(0,0);

bool angcmp(point a,point b){
	if(collinear(pivot,a,b))
		return dist(pivot,a) < dist(pivot,b);
	double d1x = a.x-pivot.x,d1y = a.y - pivot.y;
	double d2x = b.x - pivot.x, d2y = b.y - pivot.y;
	return (atan2(d1y,d1x)-atan2(d2y,d2x))<0;}

vector<point> CH(vector<point> P){
	int i,j,n=(int)P.size();
	/*f(n<=3){
		if(!(P[0]==P[n-1]))P.push_back(P[0]);
		return P;}*/
	int p0 = 0;
	for(i=1;i<n;i++)
		if(P[i].y<P[p0].y||(P[i].y==P[p0].y&&P[i].x>P[p0].x))
			p0=i;
	point temp = P[0];P[0]=P[p0];P[p0]=temp;
	pivot = P[0];
	sort(++P.begin(),P.end(),angcmp);
	vector<point> S;
	S.push_back(P[n-1]);
	S.push_back(P[0]);
	S.push_back(P[1]);
	i=2;
	vector<point> rejc;
	while(i<n){
		j=S.size()-1;
		if(ccw(S[j-1],S[j],P[i]))S.push_back(P[i++]);
		else rejc.push_back(S[j]),S.pop_back();}
	return rejc;
}

int n,a,b;
vector<point> P;

int main(){
	while(scanf("%d",&n),n!=0){
		for(int i=0;i<n;i++){scanf("%d%d",&a,&b);
		P.push_back(point(a,b));}
		int sum=0;
		while(P.size()>=3){
			P=CH(P);
			cout<<P.size()<<endl;
			sum++;
		}
		if(sum%2==0)printf("Do not take this onion to the lab!\n");
		else printf("Take this onion to the lab!\n");
		P.clear();
	}

}
