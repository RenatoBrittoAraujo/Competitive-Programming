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
const ll N = 5301; 

int n;
int arr[N][N];
char c;

int fl[N];

int solve(){
	int px=1;
	for(int i=1;i<n;i++){
		if(fl[i]==fl[i-1])px++;
		else break;
	}
	if(px==1)return 1;
	bool val=0;
	for(int i=px-1;i<n;i+=px){
		for(int j=px-1;j<n;j+=px){
			int no=arr[i][j];
			if(i>px)no-=arr[i-px][j];
			if(j>px)no-=arr[i][j-px];
			if(i>px&&j>px)no+=arr[i-px][j-px];
			//cout<<"SQUARE EDGE "<<i<<' '<<j<<" HAS "<<no<<" ONE's\n";
			if(!(no==px*px||no==0))return 1;
		}
	}
	return px;
}

void preproc(){
	int av=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]+=(j>0?arr[i][j-1]:0);
			arr[i][j]+=(i>0?arr[i-1][j]:0);
			arr[i][j]-=((j>0 and i>0)?arr[i-1][j-1]:0);	
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n/4;j++){
		scanf(" %c",&c);
		int v;
		if(c>='0' and c<='9')v=c-'0';
		else v=10+c-'A';
		for(int k=0;k<4;k++){
			if(i==0)fl[j*4+3-k]=v%2;
			arr[i][j*4+3-k]=v%2,v/=2;
		}}
	}
	preproc();
	printf("%d\n",solve());
	return 0;
}
