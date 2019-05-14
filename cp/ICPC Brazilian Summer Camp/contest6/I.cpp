#include <bits/stdc++.h>

using namespace std;

vector<string> strs;

int main(){
	string s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s,strs.push_back(s);
	for(int i=n-2;i>=0;i--){
		while(strs[i]>strs[i+1])strs[i].pop_back();
	}
	for(int i=0;i<n;i++)cout<<strs[i]<<endl;
}

