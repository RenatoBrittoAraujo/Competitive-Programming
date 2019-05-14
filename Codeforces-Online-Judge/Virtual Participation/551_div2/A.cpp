
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

	int n, t;
	cin>>n>>t;
		
	vector<int> ar(2 * N);
	
	int a,b;

	loop(i,0,n){

		cin>>a>>b;
		
		for(int j = a; j < 2 * N; j += b)
			ar[j] = i + 1; 

	}

	for(int i = t; i < 2 * N; i++)
		if(ar[i] != 0){
			cout<<ar[i]<<endl;
			return 0;
		}
		

	return 0;
}
