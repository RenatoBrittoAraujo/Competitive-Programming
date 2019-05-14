cd ..
#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
const int N = 100;
using ll = long long;

int n,m;

struct Mat{	
	ll ma[N][N];
	Mat(){memset(ma,0,sizeof ma);}
	void id(){for(int i=0;i<m;i++)ma[i][i]=1;}
	Mat operator* (const Mat &a)const{
		Mat r;
		for(int i=0;i<m;i++)
			for(int j=0;j<m;j++)
				for(int k=0;k<m;k++)
					r.ma[i][j]=(r.ma[i][j]+ma[i][k]*a.ma[k][j])%mod;
		return r;
	}
};

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m;
	Mat r,a;
	r.id();
	a.ma[0][0] = a.ma[0][m-1] = 1LL;
	for(int i=1;i<m;i++)a.ma[i][i-1]=1;
	while(n){
		if(n&1LL)r = r*a;
		a=a*a;
		n>>=1;
	}	
	cout<<r.ma[0][0]<<endl;
	return 0;
}
