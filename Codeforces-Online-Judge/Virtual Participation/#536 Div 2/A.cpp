#include <bits/stdc++.h>

using namespace std;

string s,t;

bool isvowel(char a){
	return a=='a'||a=='e'||a=='i'||a=='o'||a=='u';
}

int main(){
	cin>>s>>t;
	if(s.size()!=t.size())cout<<"No\n";
	else{
		bool f=1;
		for(int i=0;f&&i<s.size();i++){
			if(isvowel(s[i])!=isvowel(t[i]))f=0;
		}
		if(f)cout<<"Yes\n";
		else cout<<"No\n";
	}
}
