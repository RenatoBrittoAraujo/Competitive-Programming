//TEMPLATE DO RENATO SINCE 1929
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int,int>;
#define ff first
#define ss second
#define pb push_back
#define ins insert
#define eb emplace_back
using vi = vector<int>;

string s;
bool v,h;

int main(){
	cin>>s;
	v=0;h=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'){
			if(v)cout<<1<<' '<<4<<endl,v=0;
			else cout<<3<<' ' <<4<<endl,v=1;
		}else{
			if(h)cout<<1<<' '<<3<<endl,h=0;
			else cout<<1<<' '<<1<<endl,h=1;
		}
	}
	return 0;
}
