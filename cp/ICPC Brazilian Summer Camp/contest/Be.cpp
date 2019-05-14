#include <bits/stdc++.h>
using namespace std;

int arr[100010],n;double sum=0;

int main(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
	int r=sum;
	r/=4;sm/=4.0;
	bool p=0;
	if(sum==r){
		for(int i=0;i<1+n/4;i++){
			int in=i;va=0;
			while(va<r){va+=arr[in++];if(in>n)in=0;}
			if(va!=r)continue;
			va=0;
		y
	while(va
		}
	}
	if(!p)cout<<"N\n";
	else cout<<"Y\n";
	return 0;
}
