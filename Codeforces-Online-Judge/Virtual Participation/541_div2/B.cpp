
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define loop(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define len(a) (int)a.size()
#define allv(a) (a).begin(),(a).end()
const int INF = 0x3f3f3f3f;
const double err = 1e-9;
const int mod = 1e9 + 7;
const int N = 1e5 + 10;
using ll = long long;


int main(){
	
	int n;
	cin>>n;

	int t1 = 0;
	int t2 = 0;

	ll ans = 0;

	for(int i = 0; i < n; i++)
	{
		int a,b;
		cin>>a>>b;
		
		ans += max(0, min(a,b) - max(t1,t2) + 1);
		t1 = a;
		t2 = b;

		if(t1 == t2)
			t1++, t2++;

	}

	cout<<ans<<endl;


	return 0;
}
