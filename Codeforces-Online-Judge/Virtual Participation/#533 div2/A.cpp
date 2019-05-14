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

int n;
int arr[1001];

int main(){
	scanf("%d",&n);
	int nmi=1000,nma=0;
	for(int i=0;i<n;i++)scanf("%d",arr+i),nmi=min(nmi,arr[i]),nma=max(nma,arr[i]);
	//cout<<nmi<<' '<<nma<<endl;
	int v=1000000,t;
	for(int i=nmi;i<=nma;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			if(abs(i-arr[j])>1)
				sum+=abs(i-arr[j]+((i<arr[j])?1:-1));	
		}
		//cout<<"SUM FOR T "<<i<<" = "<<sum<<endl;
		if(sum<v)v=sum,t=i;
	}	
	printf("%d %d\n",t,v);
	return 0;
}
