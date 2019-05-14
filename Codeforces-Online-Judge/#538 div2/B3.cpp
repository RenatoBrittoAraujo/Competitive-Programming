#include <bits/stdc++.h>
 
using namespace std;
 
// Debugging macros
#define TRACE(x) x
#define WATCH(x) TRACE( cout << #x" = " << x << endl)
#define PRINT(x) TRACE(printf(x))
#define WATCHR(a, b) TRACE( for(auto c = a; c != b;) cout << *(c++) << " "; cout << endl)
#define WATCHC(V) TRACE({cout << #V" = "; WATCHR(V.begin(), V.end()); } )
// End of Debugging macros
 
// Macros for faster typing
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) (int) (v).size()
#define rep(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define pb push_back
 
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
// End of macros for faster typing
 
constexpr int inf = 0x3f3f3f3f;
constexpr ll MOD = 1000000007LL;
constexpr double tol = 1e-8;
 
inline ll powmod( ll a, ll b, ll mod = MOD) {
    ll res = 1; a %= mod; assert(b >= 0);
    for(;b;b>>=1) {
        if(b&1) res = (res * a) % mod;
        a = (a * a) % mod;
    }
    return res;
}
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int main() {
    ios::sync_with_stdio(0);cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<pll> elems;
    vector<ll> v(n);
    rep(i,0, n) {
        ll x;
        cin >> x;
        elems.emplace_back(-x, i*1LL);
    }
    sort( all(elems) );
    vector<ll> good;
    for(int i = 0; i < m * k; ++i) good.push_back( elems[i].second );
    sort( all(good) );
    vector<int> starts;
    ll ans = 0;
    for(int i = 0; i < m * k; ++i) {
        if( i % m == 0) starts.push_back( good[i] );
        ans += (- elems[i].first );
    }
    cout << ans << endl;
    for(int i = 1; i < sz(starts); ++i) {
        cout << starts[i] << " ";
    }
    return 0;
}
