
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
const int N = 2e5 + 10;

vector<int> G[N];
bool vis[N];

vector<int> ans;

void dfs(int u)
{
	vis[u] = 1;
	ans.pb(u);

	sort(allv(G[u]));

	for(auto v: G[u])
	{
		if(!vis[v])
		{
			dfs(v);
		}
	}

}

int nxt[N];

int main(){
	
	int n;
	cin>>n;

	loop(i,0,n)
		nxt[i] = i;

	for(int i = 0; i < n - 1; i++)
	{
		
		int a, b;
		cin>>a>>b;
		a--; b--;

		a = nxt[a];
		while(G[a].size() > 1)
			a = nxt[a] = G[a][0];

		b = nxt[b];
		while(G[b].size() > 1)
			b = nxt[b] = G[b][0];

		G[a].pb(b);
		G[b].pb(a);
	
	}

	int sel = 0;

	for(int i = 0; i < n; i++)
	{
		if(G[i].size() == 1)
		{
			sel = i;
			break;
		}
	}

	vis[sel] = 1;

	dfs(sel);

	/*
	queue<int> tv;

	tv.push(sel);
	

	while(!tv.empty())
	{
		int v = tv.front();
		//cout<<"CUR VER: "<<v<<endl;
		tv.pop();
		ans.pb(v);
		for(int i = 0; i < G[v].size(); i++)
		{
			if(!vis[G[v][i]])
			{
				tv.push(G[v][i]);
				vis[G[v][i]] = 1;
			}
		}
	}*/

	loop(i,0,len(ans))
		cout<<ans[i] + 1<<' ';

		cout<<endl;

	return 0;
}
