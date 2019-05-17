
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
using vi = vector<int>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3fLL;
const double err = 1e-9;
const int mod = 1e9+7;
const int N = 1e5+10;



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
	int a[101];
	loop(i,0,n)
		cin>>a[i];
		
	sort(a, a + n);
	
	int mx = a[n - 1];
	int mi = a[0];

	bool kkk = true;

	loop(i,0,n)
		if(a[i] != mx and a[i] != mi)
			kkk = false;
		
	int d = (mx - mi) / 2;

	if(kkk){

		if((mx - mi) % 2 == 0)
			cout<<d<<endl;
		else 
			cout<<mx - mi<<endl;
		return 0;
	
	}
	
	int tg = mi + d;

	loop(i,0,n)
		if(a[i] < tg)
			a[i] += d;
		else if(a[i] > tg)
			a[i] -= d;
			
	loop(i,1,n){
		if(a[i] != a[i - 1]){
			cout<<-1<<endl;
			return 0;
		}
	}
			
	cout<<d<<endl;	

	return 0;
}
