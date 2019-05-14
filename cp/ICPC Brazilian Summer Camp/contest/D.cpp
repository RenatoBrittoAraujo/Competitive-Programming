#include <bits/stdc++.h>
using namespace std;
string str;
set<string> stored;

string process(string str){
	int i=0;
	bool mf=0;
	string out;
	while(str[i]!='@'){if(str[i]=='+')mf=1;
		if(str[i]!='.'&&!mf)out+=str[i];i++;}
	for(;i<str.size();i++)out+=str[i];
	return out;
}

int main(){
	int ca;
	cin>>ca;
	for(int i=0;i<ca;i++){
		cin>>str;
		stored.insert(process(str));
	}
	cout<<(int)stored.size()<<endl;
}
