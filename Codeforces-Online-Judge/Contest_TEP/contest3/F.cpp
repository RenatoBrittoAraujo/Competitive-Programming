
#include <bits/stdc++.h>
using namespace std;
#define y second
#define x first
#define pb push_back
#define eb emplace_back
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()
#define allv(a) (a).begin(),(a).end()
using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

ii p1;
ii p2;

int prod(ii c){

	c.x -= p1.x;
	c.y -= p1.y;

	return c.x * p2.y - c.y * p2.x;

}

bool intersec(ii a, ii b, ii c, ii d){

	p1 = a;
	p2 = b;

	p2.x -= p1.x;
	p2.y -= p1.y;

	int v1 = prod(c);
	int v2 = prod(d);

	if(v1 != 0)
	v1 = v1 / abs(v1);
	if(v2 != 0)
	v2 = v2 / abs(v2);

//	cout<<v1<<' '<<v2<<endl;

	if(v1 == v2)
		return false;

	p1 = c;
	p2 = d;
	p2.x -= p1.x;
	p2.y -= p1.y;

	v1 = prod(a);
	v2 = prod(b);
	if(v1 != 0)
	v1 = v1 / abs(v1);
	if(v2 != 0)
	v2 = v2 / abs(v2);

//	cout<<v1<<' '<<v2<<endl;

	if(v1 == v2)
		return false;

//	cout<<"INTERSECTION\n";
	
	return true;

}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	/*	
	while(1){
	
		int a,b,c,d,e,f,g,h;
		cin>>a>>b>>c>>d>>e>>f>>g>>h;
		cout<<intersec({a,b},{c,d},{e,f},{g,h})<<endl;

	}
	*/
	
	vector<ii> pts;
	loop(i,0,8){
		int a,b;
		cin>>a>>b;
		pts.eb(a,b);
	}

	bool val = 0;

	loop(i,0,4)
		loop(j, 4, 8)
			val |= (pts[i] == pts[j]) or intersec(pts[i], pts[i + 1 == 4 ? 0 : i + 1],
							pts[j], pts[j + 1 == 8 ? 4 : j + 1]);

	int maxx = -1000, minx = 1000, maxy = -1000, miny = 1000;

	loop(i,0,4){
		maxx = max(maxx, pts[i].x);
		maxy = max(maxy, pts[i].y);
		minx = min(minx, pts[i].x);
		miny = min(miny, pts[i].y);
	}

	loop(j, 4, 8)
		if(pts[j].x >= minx and pts[j].x <= maxx and pts[j].y >= miny and pts[j].y <= maxy)
			val = true;

	ii pt = pts[0];

	int cp;

	bool vv = 0;

	loop(j, 4, 8){


		p1 = pts[j];
		p2 = pts[(j + 1 == 8 ? 4 : j + 1)];
		
		p2.x -= p1.x;
		p2.y -= p1.y;

		if(j == 4){
			cp = prod(pt);
			if(cp != 0)
				cp /= abs(cp);
		}else{
			int x = prod(pt);
			if(x != 0)
			x /= abs(x);
			if(x != cp){
				vv = 1;
			}


		}

	}

	if(!vv)val = 1;

	cout<<(val?"YES":"NO")<<endl;

	return 0;
	
}
