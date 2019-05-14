#include <bits/stdc++.h>

using namespace std;

set<string> nu;
string a;

int main(){
	int l;
	while(cin>>l,!cin.eof()){
        int e=0;
        while(l--){
            cin>>a;
            nu.insert(a);
        }
        bool c=false;
        for(auto n: nu){
            if(!c){a=n;c=1;continue;}
            for(int i=0;i<a.size();i++){
                if(n[i]==a[i])e++;
                else break;
            }
            a=n;
        }
        cout<<e<<endl;
        nu.clear();
	}
	return 0;
}
