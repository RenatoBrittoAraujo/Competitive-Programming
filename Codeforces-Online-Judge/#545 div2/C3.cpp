
#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define mp make_pair
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

int a[1010][1010];

int uc[1010],ur[1010];

int r[1010][1010],c[1010][1010];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n,m;
	scanf("%d%d",&n,&m);
	loop(i,0,n)loop(j,0,m)scanf("%d",&a[i][j]);
	
	loop(i,0,n){
		vi t;
		t.assign(m,0);
		loop(j,0,m)t[j] = a[i][j];
		sort(allv(t));
		ur[i] = unique(allv(t)) - t.begin();
		loop(j,0,m){
			r[i][j] = lower_bound(t.begin(),t.begin() + ur[i],a[i][j]) - t.begin();
		}
	}
	
	//loop(i,0,n){loop(j,0,m)cout<<r[i][j]<<' ';cout<<endl;}
	//loop(i,0,n)cout<<ur[i]<<' ';cout<<endl;

	loop(j,0,m){
		vi t;
		t.assign(n,0);
		loop(i,0,n)t[i] = a[i][j];
		sort(allv(t));
		uc[j] = unique(allv(t)) - t.begin();
		loop(i,0,n){
			c[i][j] = lower_bound(t.begin(),t.begin() + uc[j],a[i][j]) - t.begin();
		}
	}
	
	//loop(i,0,m){loop(j,0,m)cout<<c[i][j]<<' ';cout<<endl;}
	//loop(i,0,m)cout<<uc[i]<<' ';cout<<endl;
		
	loop(i,0,n){
		loop(j,0,m){
			int vr = r[i][j];
			int vc = c[i][j];
			if(vr < vc){
				printf("%d ",max(uc[j] , ur[i] + vc - vr));
			}else{
				printf("%d ",max(ur[i] , uc[j] + vr - vc));
			}
		}
		printf("\n");
	}	

	return 0;
}
