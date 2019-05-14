#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()
#define allv(a) (a).begin(),(a).end()
#define mp make_pair
using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;

using iii = pair<ii,ii>;

int n;
bool c[5010],a[5010];

inline bool val(iii v){return v.ff.ff >= 0;}

map<iii,iii> mep;

int uniq = 0;

iii dp(int p,int c1,int a2,int f){
	
	if(f > n/2)return mp(ii(-1,-1),ii(-1,-1));

	//cout<<"RUN "<<p<<" "<<c1<<" "<<a2<<" "<<f<<"\n";
	if(p == n){
		if(f != (n/2) or c1 != a2)return mp(ii(-1,-1),ii(-1,-1));
		else return mp(ii(0,0),ii(0,0));
	}

	iii cancer = iii(ii(p,c1),ii(a2,f));

	if(mep.find(cancer) != mep.end()){
		return mep[cancer];
	}

	uniq++;

	iii ret;

	if(a[p] and c[p]){
		ret = dp(p+1,c1+1,a2,f+1);
		if(val(ret)){ret.ff.ff++;return mep[cancer] = ret;}
		ret = dp(p+1,c1,a2+1,f);
		if(val(ret))return mep[cancer] = ret;
	}
	if(!a[p] and c[p]){
		ret = dp(p+1,c1+1,a2,f+1);
		if(val(ret)){ret.ff.ss++;return mep[cancer] = ret;}
		ret = dp(p+1,c1,a2,f);
		if(val(ret))return mep[cancer] = ret;
	}
	if(a[p] and !c[p]){
		ret = dp(p+1,c1,a2,f+1);
		if(val(ret)){ret.ss.ff++;return mep[cancer] = ret;}
		ret = dp(p+1,c1,a2+1,f);
		if(val(ret))return mep[cancer] = ret;
	}
	if(!a[p] and !c[p]){
		ret = dp(p+1,c1,a2,f+1);
		if(val(ret)){ret.ss.ss++;return mep[cancer] = ret;}
		ret = dp(p+1,c1,a2,f);
		if(val(ret))return mep[cancer] = ret;
	}
	return mep[cancer] = mp(ii(-1,-1),ii(-1,-1));
}

string s1,s2;

int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>s1>>s2;
	
	//cout<<"INPUT READ, NOW RUNNING\n";
	
	loop(i,0,n){c[i] = s1[i] - '0';}
	loop(i,0,n){a[i] = s2[i] - '0';}

	vi cl,ac,bo,no;

	loop(p,0,n){
		if(a[p] and c[p])bo.pb(p);
		if(a[p] and !c[p])ac.pb(p);
		if(!a[p] and c[p])cl.pb(p);
		if(!a[p] and !c[p])no.pb(p);
	}
	
	iii fret = dp(0,0,0,0);
		
	if(!val(fret))cout<<-1<<endl;
	else{
		vi ans;
		loop(i,0,fret.ff.ff)ans.pb(ac[i]);
		loop(i,0,fret.ff.ss)ans.pb(cl[i]);
		loop(i,0,fret.ss.ff)ans.pb(bo[i]);
		loop(i,0,fret.ss.ss)ans.pb(no[i]);
		
		loop(i,0,len(ans))cout<<ans[i] + 1<<' ';
		cout<<endl;
		
	}

	cout<<"DP HAS BEEN CALLED "<<uniq<<" UNIQUE TIMES\n";
	return 0;
}
