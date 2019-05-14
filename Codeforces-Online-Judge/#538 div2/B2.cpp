//TEMPLATE DO RENATO SINCE 1929
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int,int>;
#define ff first
#define ss second
#define pb push_back
#define ins insert
#define eb emplace_back
using vi = vector<int>;
const ll N = 100010;

bool cmp(ii a,ii b){return (a.ff!=b.ff?a.ff>b.ff:a.ss<b.ss);}

int main(){
	int n,m,k,x;
	scanf("%d%d%d",&n,&m,&k);
	vector<ii> elems;
	for(int i=0;i<n;i++)scanf("%d",&x),elems.eb(x,i);
	sort(elems.begin(),elems.end(),cmp);
	//for(int i=0;i<elems.size();i++)cout<<elems[i].first<<' ';cout<<endl;
	vector<int> pos;	
	for(int i=0;i<m*k;++i)pos.pb(elems[i].second);
	sort(pos.begin(),pos.end());
	vi st;
	ll sum=0;
	for(int i=0;i<m*k;++i){
		if(i%m==0)st.pb(pos[i]);
		sum+=elems[i].first;	
	}	
	printf("%lld\n",sum);
	for(int i=1;i<st.size();++i)printf("%d ",st[i]);printf("\n");
	return 0;
}
