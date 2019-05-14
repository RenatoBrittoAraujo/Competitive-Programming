
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
const double err = 1e-9;
const int mod = 1e9 + 7;
const int N = 1e5 + 10;

int main(){

	int n;
	string s;
	cin>>n>>s;
	
	int om = 0, cm = 0;

	loop(i,0,n)
	{
		if(s[i] == '(')
			cm++;
		else if(s[i] == ')')
			om++;
	}

	cm = n / 2 - cm;
	om = n / 2 - om;
	
	loop(i,0,n){
		if(s[i] == '?'){
			if(cm){
				s[i] = '(';
				cm--;
			}else if(om){
				s[i] = ')';
				om--;
			}
		}
	}

	bool val = true;
	
	int cnt = 0;

	loop(i,0,n){
		if(s[i] == '(')
			cnt++;
		else if(cnt)
			cnt--;
		else val = false;
	
		if(!cnt and i < n -1 )
			val = false;
	}
	
	if(cnt)
		val = false;

	cout<<(val?s:":(")<<endl;

	return 0;
}
