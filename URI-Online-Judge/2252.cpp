#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
    double o[10];
	int v[10];
	int t=1;
	while(cin>>n,!cin.eof()){
		for(int i=0;i<10;i++){cin>>o[i];v[i]=i;}
		for(int i=0;i<10;i++){
			for(int j=i+1;j<10;j++){
				if(o[i]<o[j]||(o[i]==o[j]&&v[i]>v[j])){
					double t1=o[i];
					int t2=v[i];
					o[i]=o[j];
					v[i]=v[j];
					o[j]=t1;
					v[j]=t2;
				}
			}
		}
		cout<<"Caso "<<t<<": ";
		for(int i=0;i<n;i++)cout<<int(v[i]);
		cout<<endl;
		t++;
	}
}
