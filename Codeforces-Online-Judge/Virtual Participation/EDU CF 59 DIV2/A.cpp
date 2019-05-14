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

int q,n;string s;
ll arr[301];

int main(){
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>n>>s;
		string s1 = s.substr(0,1);
		string s2 = s.substr(1,s.size()-1);
		if(s2.size()>s1.size())cout<<"YES\n"<<2<<endl<<s1<<' '<<s2<<endl;
		else if(stoi(s2)>stoi(s1))cout<<"YES\n"<<2<<endl<<s1<<' '<<s2<<endl;
		else cout<<"NO\n";
	}
	return 0;
}
