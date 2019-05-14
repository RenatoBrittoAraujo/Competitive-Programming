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

int ini[1010][1010],l[1010][1010],c[1010][1010];
int n,m;
int cm[1010];
int ilm[1010],icm[1010];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>m;
	memset(cm, INF, sizeof cm);
	loop(i,0,n){
		int mi = INF;
		loop(j,0,m){
			cin>>ini[i][j];
			if(ini[i][j] < mi)mi = ini[i][j], ilm[i] = j;
			if(ini[i][j] < cm[j])cm[j] = ini[i][j], icm[j] = i;
		}
	}

	
	
	

	return 0;
}
