#include <bits/stdc++.h>

using namespace std;

int main(){
	int no[100];
	string a[100];
	int n;
	int t=1;
	while(cin>>n,!cin.eof()){
		int me=10;
		for(int i=0;i<n;i++){
			cin>>a[i]>>no[i];
			if(no[i]<me)me=no[i];
		}
		set<string> ir;
		for(int i=0;i<n;i++){
			if(no[i]==me)ir.insert(a[i]);
		}
		cout<<"Instancia "<<t<<endl;
		t++;
		int i=0;
		for(auto v: ir){i++;if(i==ir.size())cout<<v<<endl;}
		cout<<endl;
	}
}

