
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

int pref[200][N];
bool ex[200];
int s[N];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
	string str;
	cin>>str;

	loop(i,0,n)
		s[i] = str[i] - (str[i] >= 'a' ?('a' - 26): 'A');
	

	//loop(i,0,n)
//		cout<<s[i]<<endl;
	
	loop(i,0,n){

		ex[s[i]] = true;

		loop(j,0,26 * 2)
			pref[j][i + 1] = (s[i] == j) + pref[j][i];

	}

	int uniq = 0;

	loop(i,0,26 * 2)
		uniq += ex[i];

	int ans = INF;

	set<int> no;

	no.insert(s[0]);

	for(int i = 0, j = 0; i < n; i++){

		while(j < n - 1 and no.size() < uniq)
			no.insert(s[++j]);

		//cout<<i<<' '<<j<<endl;

		if(no.size() == uniq){

			//cout<<"VAL\n";

			ans = min(j - i + 1, ans);

		}

		if(pref[s[i]][i + 1] == pref[s[i]][j + 1])
			no.erase(s[i]);
			//cout<<"REM\n";

	}

	cout<<ans<<endl;

	return 0;
}
