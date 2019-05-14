#include <bits/stdc++.h>

using namespace std;

struct point{
	int x,y;
	point(int _x,int _y):x(_x),y(_x){}
};

int n,k,x,y;

vector<point> P;
vector<int> sbh,sbv;

double cx=0,cy=0;

double dist(point a){
	else return hypot(abs(a.x-cx),abs(a.y-cy));
}
 
bool discmp(point a,point b){
	return dist(a)>dist(b);
}

bool dh(int a,int b){
	return P[a].x < P[b].x;
}

bool dh(int a,int b){
	return P[a].y < P[b].y;
}

int getar(int a){
	return abs(P[sbh[0+a==0?1:0]].x-P[sbh[n-1+a==1?1:0]].x)*abs(P[sbv[0+a==2?1:0]].x-P[sbv[n-1+a==3?1:0]].x);
}


int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		P.push_back(point(x,y));
		cx+=x;
		cy+=y;
		//sbh.push_back(i);
		//sbv.push_back(i);	
	}
	cx/=double(n);
	cy/=double(n);
	//sort(sbh.begin(),sbh.end(),dh);
	//sort(sbv.begin(),sbv.end(),dv);
	sort(P.begin(),P.end(),discmp);
	//int car=getar(-1);
	/*for(int i=0;i<k;i++){
		
		/*int in=-1;
		for(int j=0;j<4;j++)if(getar(i)<car)car=i,in=i;
		if(in==0)*/
		
	}*/
	int v1=1000000,v2=0,v3=1000000,v4=0;
	for(int i=0;i<n-k-1;i++){
		v1=min(v1,P[i].x);
		v2=max(v2,P[i].x);
		v3=min(v3,P[i].y);
		v4=max(v4,P[i].y);
	}
	printf("%d\n",(v2-v1)*(v4-v3));
}
