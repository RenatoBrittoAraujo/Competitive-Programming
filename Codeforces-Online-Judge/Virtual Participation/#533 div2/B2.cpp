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

int v[26];
int n,k;
char ac,lc='&';
int csc=0;
int ans=0;
bool f=1;

int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		f=1;
		scanf(" %c",&ac);
		//cout<<"ON "<<ac<<" LC IS "<<lc;
		if(ac==lc)csc++,f=0;//cout<<" CONS, NCSC = "<<csc;
		lc=ac;
		if(csc>=k){
			int p = (int)ac-(int)'a';
			v[p]++;
			f=1;
			lc='&';
		}
		if(f)csc=1;
	}
	for(int i=0;i<26;i++)ans=max(ans,v[i]);
	printf("%d\n",ans);
	return 0;
}
