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

int n,k,ans=0,csc=1;
char lv,cv;
bool f;

int v[26]={0};

int main(){
	scanf("%d%d",&n,&k);
	scanf(" %c",&lv);
	for(int i=1;i<n;i++){
		f=0;
		scanf(" %c",&cv);
		if(cv==lv)csc++,f=1;
		if(csc==k){
			int p = (int)lv-(int)'a';
			v[p]+=csc/k;
			f=0;
		}
		if(!f)csc=1;
	}
	int p = (int)lv-(int)'a';
	v[p]+=csc/k;
	for(int i=0;i<26;i++)ans=max(ans,v[i]);
	printf("%d",ans);
	return 0;
}
