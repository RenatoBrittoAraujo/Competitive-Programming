#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ii = pair<int,int>;
#define ff first
#define ss second
#define pb push_back

int n,k,a,b,c;

vector<int> frt;

int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&a,&b,&c);
		frt.pb(a+b+c);
	}
	sort(frt.begin(),frt.end());
	for(int i=0;i<n;i++)cout<<frt[i]<<' ';cout<<endl;
	printf("%d\n",frt[k-1]);
	return 0;
}
