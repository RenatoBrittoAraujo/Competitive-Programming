#include <bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define pb push_back
#define eb emplace_back
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()
#define allv(a) (a).begin(),(a).end()
using ll = long long;
using ii = pair<int,int>;
using vi = pair<int,int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n,a;
	cin>>n>>a;
	bool arr[101];
	loop(i,0,n)cin>>arr[i];
	int l=a-1,r=a-1;
	int ans=0;
	while(l>=0 or r<n){
		//cout<<l<<' '<<r<<endl;
		if(l>=0 and r<n and l!=r and arr[l] and arr[r])ans+=2;
		else if(l==r and arr[r])ans++;	
		else if(l>=0 and r>=n and arr[l])ans++;
		else if(r<n and l<0 and arr[r])ans++;
		//cout<<"ANS = "<<ans<<endl;
		l--;r++;
	}	
	cout<<ans<<endl;
	return 0;
}
