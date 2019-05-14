#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 5005;
const ll oo = 1e18;

int n, t;
vector<pair<int, int>> g[N];

ll dp[N][N];

ll f(int u, int cnt){
    if(cnt <= 0) return oo;
    if(u == n) return cnt == 1 ? 0 : oo;
    ll &ans = dp[u][cnt];
    if(~ans) return ans;
    ans = oo;
    for(auto x : g[u]){
        int v, w;
        tie(v, w) = x;
        ans = min(ans, f(v, cnt - 1) + w);
    }
    return ans;
}


int main(){
    memset(dp, -1, sizeof dp);
    int m;
	scanf("%d %d %d", &n, &m, &t);

	for(int i = 0; i < m; i++){
        int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		g[a].emplace_back(b, c);
	}

    for(int ans = n; ; ans--){
        if(f(1, ans) <= t){
            printf("%d\n", ans);
            int cnt = ans;
            for(int i = 1; i < n; ){
                printf("%d ", i);
                for(auto x : g[i]){
                    int v, w;
                    tie(v, w) = x;
                    if(f(i, cnt) == f(v, cnt - 1) + w){
                        i = v;
                        cnt--;
                        break;
                    }
                }
            }
            printf("%d\n", n);
            break;
        }
    }

	return 0;
}
