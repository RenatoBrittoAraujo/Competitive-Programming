#include <bits/stdc++.h>

using namespace std;

struct point{
	int x,y;
	point(int ix,int iy):x(ix),y(iy){}
};

bool ins(point a, point b,point w1,point w2){
	bool f1,f2;
	//printf("W1 = %d %d W2 = %d %d\n",w1.x,w1.y,w2.x,w2.y);
	if(a.x>=w1.x&&a.x<=w2.x&&a.y>=w1.y&&a.y<=w2.y)f1=1;
	else f1=0;
	if(b.x>=w1.x&&b.x<=w2.x&&b.y>=w1.y&&b.y<=w2.y)f2=1;
	else f2=0;
	return f1!=f2;
}

vector<pair<point,point>> rect;
int indx=0;
map<int,int> qind;

int q,a,b,c,d,t;

int main(){
	indx=0;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d",&t);
		if(t==1){
			scanf("%d%d%d%d",&a,&b,&c,&d);
			if(a+b<c+d)rect.push_back(make_pair(point(a,b),point(c,d)));
			else rect.push_back(make_pair(point(c,d),point(a,b)));
			qind[q]=indx;
			indx++;
		}else if(t==2){scanf("%d",&a);indx--;rect.erase(rect.begin()+qind[a-1]);
		}else if(t==3){
			scanf("%d%d%d%d",&a,&b,&c,&d);
			bool f=0;
			for(int i=0;i<rect.size();i++){
				if(ins(point(a,b),point(c,d),rect[i].first,rect[i].second))f=1;
				if(f)break;
			}
			if(f)printf("N");
			else printf("Y");
		}
		
	}printf("\n");
}
