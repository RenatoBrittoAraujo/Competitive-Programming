#include <bits/stdc++.h>

using namespace std;

map<string,int> mape;

char c;
int q;
string s;

int main(){
	cin>>q;
	while(q--){
		cin>>c>>s;
		string aux(18,'0');
		for(int i=0;s[i];i++)
			if((s[i]-'0')&1)aux[18-s.size()+i]='1';
		if(c=='?')cout<<mape[aux]<<endl;
		if(c=='+')if(mape.find(aux)==mape.end())mape[aux]=1;
			  else mape[aux]=mape[aux]+1;
		if(c=='-')mape[aux]--;
	}
}
