#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ii = pair<int,int>;
#define ff first
#define ss second
#define push_back pb

string s;
int v,n;

int main(){
	cin>>n>>v;
	v-=4;
	cin.ignore();
	while(n--){
		getline(cin,s);
		string ans;
		for(int i=0;i<s.size();i++){
			char c = s[i];
			if(c>='a'&&c<='z'){ans+=(char)('a'+(c-'a'+v)%26);cout<<"VALUE OF "<<s[i]<<" = "<<c-'a'<<endl;}
			else if(c>='A'&&c<='Z')ans+=(char)('A'+(c-'A'+v)%26);
			else ans+=c;
			//cout<<"CHAR "<<s[i]<<" CHANGED TO "<<ans[i]<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}
