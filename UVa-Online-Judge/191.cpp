
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

ii vp1, vp2;

int vsec(ii v1, ii v2, ii v3){

	int v =	(v2.x - v1.x) * (v3.y - v1.y) - 
		   	(v2.y - v1.y) * (v3.x - v1.x);

	//cout<<v<<endl;

	if(v > 0)return 1;
	if(v < 0)return -1;
	return 0;

}


bool sec(ii l1, ii l2, ii p1 = vp1, ii p2 = vp2){
	
	int v1 = vsec(l1, l2, p1);

	int v2 = vsec(l1, l2, p2);

	int v3 = vsec(p1, p2, l1);

	int v4 = vsec(p1, p2, l2);
			
	if(!v1 or !v2 or ! v3 or !v4)
		return true;

	if(v1 != v2 and v3 != v4)
		return true;

	return false;

}

int pinseg(int a, int b, int c, int px = vp1.x, int py = vp1.y){

	if(px == a){
		if(py >= b and py <= c)
			return true;
	}

	if(py == a){
		if(px >= b and px <= c)
			return true;
	}

	return false;
}


int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	/*
	while(1){
		int a,b,c,d,e,f,g,h;
		cin>>a>>b>>c>>d>>e>>f>>g>>h;
		cout<<(sec({a,b},{c,d},{e,f},{g,h}) ? "Corta" : "Não corta")<<endl;
	}
	*/

	int n;
	cin>>n;
	while(n--){
		
		cin>>vp1.x>>vp1.y>>vp2.x>>vp2.y;

		int a,b,c,d;

		cin>>a>>b>>c>>d;

		if(vp1.x == vp2.x and vp1.y == vp2.y){

			bool val = false;

			if(	pinseg(a,b,d) or
				pinseg(c,b,d) or
				pinseg(b,a,c) or
				pinseg(d,a,c))
				val = 1;

			cout<<(val ? "T" : "F")<<endl;

			continue;

		}

		if(a > c)
			swap(a,c);

		if(b > d)
			swap(b,d);

		bool val = false;

		val |= sec({a, b}, {a, d});

		val |= sec({a, b}, {c, b});

		val |= sec({a, d}, {c, d});

		val |= sec({c, b}, {c, d});

		if(!val)cout<<"F\n";
		else cout<<"T\n";

	}	

	cout<<endl;

	return 0;
}
