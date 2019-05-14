#include <bits/stdc++.h>

using namespace std;

int t;string n;
char c;

map<string,int> mp;

string proc(string s){
	string ans;
	for(int i=0;i<s.size();i++){
		if((s[i]-48)%2==0)ans+='0';
		else ans+='1';
	}
	return ans;
}

int main(){
	cin>>t;
	while(t--){
		cin>>c>>n;
		string aux(18,'0');
		for(int i=0;n[i];i++)
			if((n[i]-'0')&1)aux[18-n.size()+i]='1';
		if(c=='+'){	
			if(mp.find(aux)!=mp.end())mp[aux]=mp[aux]+1;
			else mp[aux]=1;
		}else if(c=='-')mp[aux]=mp[aux]-1;
		else if(c=='?')
			cout<<mp[aux]<<endl;
	}
} 
