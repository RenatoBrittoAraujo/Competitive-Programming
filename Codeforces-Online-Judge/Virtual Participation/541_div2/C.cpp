
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



int main(){

	int n;
	cin>>n;

	vector<int> a(n);
	
	loop(i,0,n)
		cin>>a[i];
		
	int p1 = n - 1;
	int p2 = 1;
	
	sort(allv(a));
	
	int b[n];
	
	b[0] = a[0];

	int cnt = 1;

	for(; p1 >= p2;p1--, p2++)
	{	
		if(p1 != p2)
		{
			b[p1] = a[cnt++];
			b[p2] = a[cnt++];
		}
		else
			b[p1] = a[cnt++];
	}

	loop(i,0,n)
		cout<<b[i]<<' ';
	
	cout<<endl;
	
	return 0;
}
