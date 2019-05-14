#include <bits/stdc++.h>
using namespace std;

struct point{
	int x,y;
	point(int rx,int ry):x(rx),y(ry){}
};

struct vec{
	int x,y;
	vec(int rx,int ry):x(rx),y(ry){}
};

vec tovec(point a,point b){return vec(b.x-a.x,b.y-a.y);}

int crossprodtb(vec a,vec b){return a.x*b.y-a.y*b.x;}

vector<point> P;
vector<vec> V;
int n,a,b,c,d;
double cx,cy;

int p3[100010],p1[100010];

int main(){
	/*while(1){
		cin>>a>>b>>c>>d;
		cout<<crossprodtb(vec(a,b),vec(c,d))<<endl;
	}*/

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		P.push_back(point(a,b));
	}
	for(int i=0;i<n;i++){
		vec curr = tovec(P[i],P[(i+1<n?i+1:0)]);
		bool f=0;int j=i+1<n?i+1:0;
		while(1){
			if(crossprodtb(curr,tovec(P[j],P[(j+1<n?j+1:0)]))<0){p1[i]=j;break;}
			j++;if(j>=n)j=0;
		}
	}

	for(int i=0;i<n;i++)printf("B[%d] = %d\n",i,p1[i]);
	for(int i=0;i<n;i++){
		vec curr =  tovec(P[p1[i]],P[(p1[i]+1<n?p1[i]+1:0)]);
		bool f=0;int j=i+1<n?i+1:0;
		while(1){
			if(j==i){p3[i]=-1;break;}
			if(crossprodtb(curr,tovec(P[j],P[(j+1<n?j+1:0)]))>=0){p3[i]=j;break;}
			j++;if(j>=n)j=0;
		}
	}
	for(int i=0;i<n;i++)printf("C[%d] = %d\n",i,p3[i]);

	int total=0;

	for(int i=0;i<n;i++)
		for(int j=p1[i];j<n;j++)
			for(int k=p3[j];k<p1[i];k++)
				total++;

	printf("%d\n",total);

	return 0;
}
