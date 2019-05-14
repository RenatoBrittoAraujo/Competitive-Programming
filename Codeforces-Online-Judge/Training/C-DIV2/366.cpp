
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

queue<int> id[3*N];
queue<ii> no;
bool re[3*N];
int nn = 0;
int sr = 0;
int mx = 0;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int n,q,op,r;
	cin>>n>>q;
	loop(i,0,q){
		cin>>op>>r;
		if(op==1){
			no.push(ii(mx,r));
			id[r].push(mx);
			nn++;mx++;
		}else if(op==2){
			while(!id[r].empty()){
				if(!re[id[r].front()])re[id[r].front()] = 1, nn--;
				id[r].pop();
			}
		}else{
			ii v;
			while(!no.empty() and no.front().ff < r){
				if(!re[no.front().ff])re[no.front().ff]=1,nn--;
				no.pop();
			}
		}
		cout<<nn<<endl;
	}	
	return 0;
}
