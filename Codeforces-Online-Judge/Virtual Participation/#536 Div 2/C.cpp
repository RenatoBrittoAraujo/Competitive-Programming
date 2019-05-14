#include <bits/stdc++.h>

using namespace std;

vector<long long> avg;
long long n,k,a,b,x;

long long search(long long l,long long r){
	long long i = lower_bound(avg.begin(),avg.end(),l)-avg.begin();
	long long j = upper_bound(avg.begin(),avg.end(),r)-avg.begin();
	//cout<<"SEARCH "<<l<<'>'<<r<<" RETURN "<<j<<'-'<<i<<endl;
	return j-i;
}

long long rec(long long l,long long r){
	long long v = search(l,r);
	if(v==0)return a;
	else{
		long long m = (l+r)/2;
		if(r-l>0)return min((r-l+1)*v*b,rec(l,m)+rec(m+1,r));
		else return 1*v*b;
	}
}

int main(){
	cin>>n>>k>>a>>b;
	for(int i=0;i<k;i++)cin>>x,avg.push_back(x);
	sort(avg.begin(),avg.end());
	cout<<rec(1,(1<<n))<<endl;
}
