
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

int n,s,x,y;
int tp[N*2];
int tr[N*2];
int ht[N*2];
int ps[N];

const double pi = acos(-1.0);

double euclid(int x1,int y1,int x2,int y2){
	double ret = sqrt(pow(double(x1-x2),2) + pow(double(y1-y2),2));
	//cout<<"RETURNING "<<ret<<endl;
	return ret;
}

int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n;
	
	loop(i,1,n+1){
		cin>>tp[i]>>tr[i];
		loop(j,tp[i]-tr[i],tp[i]+tr[i])ps[j+30000] = i;
	}
	
	cin>>s;
	
	int hits = 0;
	
	loop(sh,1,s+1){
		cin>>x>>y;
		x+=30000;
		if(ps[x]!=0 or ps[x-1]!=0){
			int l = ps[x-1];
			int r = ps[x];
			if(l>0 and ht[l] == 0 and (double)tr[l] >= euclid(x,y,tp[l]+30000,0))ht[l] = sh,hits++;
			if(r>0 and r!=l and ht[r] == 0 and (double)tr[r] >= euclid(x,y,tp[r]+30000,0))ht[r] = sh,hits++;
		}
	}

	cout<<hits<<endl;
		
	loop(i,1,n+1){
		if(ht[i]==0)cout<<-1<<' ';
		else cout<<ht[i]<<' ';
	}
	cout<<endl;
	
	return 0;
}
