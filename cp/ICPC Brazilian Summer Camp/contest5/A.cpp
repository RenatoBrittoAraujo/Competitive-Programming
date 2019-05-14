#include <bits/stdc++.h>

using namespace std;

string str;

bitset<100010> p;

int main(){
	while(cin>>str,!cin.eof()){
		int s=0,lis=0,stin,sst;
		p.reset();
		int t=str.size();
		for(int i=0;i<t;i++){
			if(str[i]=='R')p[i]=1,s=0;
			else{s++;if(i>0&&str[i-1]=='R')sst=i;if(s>lis)lis=s,stin=sst;}
		}
		//lis++;
		cout<<lis<<endl;
		int pk=0;
		for(int k=lis;k<t/2;k++){
			bool rcd=0;
			int po=stin+lis-k;
			if(po<0)break;
			while(1){
				if(p[po%t]==0)break;
				if(po==stin){rcd=1;break;}
				po+=k;po%=t;
			}
			if(rcd)pk++;
		}	
		cout<<pk<<endl;
	}
	
}
