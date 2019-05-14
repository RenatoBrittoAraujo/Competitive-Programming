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
	deque<int> v;
	string s;
	
	loop(i,0,n){
		int x;
		cin>>x;
		v.push_front(x);
	}

	int last = -1;
	
	while(!v.empty()){

		if((v.back() > v.front() and v.front() > last) or v.back() <= last){

			if(v.front() <= last)
				break;
			else
				last = v.front(),
				v.pop_front(),
				s += 'R';

		}else{

			if(v.back() <= last)
				break;
			else
				last = v.back(),
				v.pop_back(),
				s += 'L';

		}
		
	}	

	cout<<s.size()<<endl;
	cout<<s<<endl;

	return 0;
}
