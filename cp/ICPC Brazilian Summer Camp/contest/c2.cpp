#include <bits/stdc++.h>
using namespace std;
int n,arr[10010][2];

double dps[10010][121][8]={0};

double price(int i,int dur,int ntr){
	if(!(dps[i][dur][ntr]==0))return dps[i][dur][ntr];
	if(i==n)return 0;
	if(dur==0)ntr=0;
	if(dur<=0||ntr>5)return dps[i][dur][ntr] = price(i+1,max(120-arr[i][0],0),1)+arr[i][1];
	else return dps[i][dur][ntr] = min(price(i+1,max(dur-arr[i][0],0),ntr+1)+(double)arr[i][1]*(0.5-0.25*(ntr>1?1:0)),
			price(i+1,max(120-arr[i][0],0),1)+arr[i][1]);
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i][0]>>arr[i][1];
	printf("%.2f\n",price(0,0,0));
	return 0;
}
