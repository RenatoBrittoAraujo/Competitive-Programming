#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin>>n;
	string a;
	cin.ignore();
	getline(cin,a);
	int op=1;
	while(a[op-1]!=' ')op++;
	long long int v1 = stoi(a.substr(0,op-1));
	long long int v2 = stoi(a.substr(op+1,a.size()-op-1));
	long long int r;
	double rd;
	if(a[op]=='+'){r=v1+v2;rd=v1+v2;}
	else {r=v1*v2;rd=v1*v2;}
	if(r>n)cout<<"OVERFLOW\n";
	else cout<<"OK\n";
}
