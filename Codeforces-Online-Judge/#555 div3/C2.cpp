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
const int N = 2e5+10;



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
	int v[N];
	string s;
	
	loop(i,0,n)
		cin>>v[i];

	int last = -1;
	
	int l = 0, r = n - 1;

	while(r - l >= 0){

		if(v[l] == v[r] and r - l > 2){

			int nl = l + 1;
			int nr = r - 1;

			while(v[nr] == v[nl] and nr > nl)
				nr--, nl++;

			if(v[nr] == v[nl]){

				last = v[l];
				l++;
				s+='L';


			}else if(v[nl] < v[nr] and v[nl] > last){

				last = v[l];
				l++;
				s+='L';

			}else if(v[nr] < v[nl] and v[nr] > last){

				last = v[r];
				r--;
				s+='R';

			}else break;

		}else if((v[l] > v[r] and v[r] > last) or v[l] <= last){
			
			if(v[r] <= last)
				break;
			else
				last = v[r],
				r--,
				s+='R';

		}else{

			if(v[l] <= last)
				break;
			else
				last = v[l],
				l++,
				s+='L';

		}
	}

	cout<<s.size()<<endl;
	cout<<s<<endl;

	return 0;
}
