#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<int, int>;
#define ff first
#define ss second
#define pb push_back

const int N = 100005;

int a[N];
int b[N];
int n;
int ft[N];

void upd(int id, int val) {
	while(id < N){
		ft[id] += val;
		id += id & (-id);
	}
}

int qry(int id){
	int ret = 0;
	while(id){
		ret += ft[id];
		id -= id & (-id);
	}
	return ret;
}

long long solve(){
	ll ans = 0;
	for(int i = 1; i <= n; i++){
		ans += qry(N - 1) - qry(b[i]);
		upd(b[i], 1);
	}
	for(int i = 1; i <= n; i++){
		upd(b[i], -1);
	}

	return ans;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		map<int, int> ma;
		scanf("%d", &n);
		for(int i = 1; i <= n; i++){
			scanf("%d", a+i);
			ma[a[i]] = i;
		}
		for(int i = 1; i <= n; i++){
			scanf("%d", b+i);
			b[i] = ma[b[i]];
		}

		printf("%lld\n", solve());
	}
	return 0;
}
