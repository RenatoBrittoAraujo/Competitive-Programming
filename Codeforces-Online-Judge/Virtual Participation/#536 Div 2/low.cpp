#include <bits/stdc++.h>

using namespace std;

vector<int> vec;

int a,b,c;

int main(){
	while(1){
		cin>>a;
		if(a==1){cin>>b;vec.push_back(b);}
		else{
			cin>>b;
			sort(vec.begin(),vec.end());
			cout<<"CURRENT ARRAY >\n";
			for(int i=0;i<vec.size();i++)cout<<vec[i]<<' ';cout<<endl;
			int p1 = lower_bound(vec.begin(),vec.end(),b)-vec.begin();
			int p4 = upper_bound(vec.begin(),vec.end(),b)-vec.begin();
			cout<<"LOWER "<<b<<" -> "<<p1<<endl;
			cout<<"UPPERS "<<b<<" -> "<<p4<<endl;	
		}
	}
}
