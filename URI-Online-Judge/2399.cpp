#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x;
	cin>>n;
	int m[n]={0};
	for(int i=0;i<n;i++){
        cin>>x;
        if(x==1){
        if(i-1>=0)m[i-1]++;
        m[i]++;
        if(i+1<n)m[i+1]++;
        }
	}
	for(int i=0;i<n;i++)cout<<m[i]<<endl;
}
