#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
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



int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
	
	int h1,m1,h2,m2;
	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);	

	int t1 = h1*60 + m1;
	int t2 = h2*60 + m2;
	
	int mid = t1 + (t2 - t1) / 2;
		
	printf("%.2d:%.2d\n",mid/60,mid%60);
	
	return 0;
}
