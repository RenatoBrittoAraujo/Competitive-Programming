#include <bits/stdc++.h>

using namespace std;

int n,ind;

string s;

int main(){
	while(getline(cin,s),!cin.eof()){
		istringstream ss(s);ind=0;
		int sum=0,msum=0;
		while(ss>>n){
			sum+=n;
			sum=max(sum,0);
			msum=max(sum,msum);
		}
		printf("%d\n",msum);
	}
}
