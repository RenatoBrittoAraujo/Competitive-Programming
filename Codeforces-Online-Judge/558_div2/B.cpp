
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

int a[N];

int qt[N];
int fr[N];

set<int> ca;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);

	int n;
	cin>>n;
	loop(i,0,n)
		cin>>a[i];

	int ans = 1;

	loop(i,0,n)
	{		
	/*	
		cout<<"\n\nFR: ";
		loop(i,0,11)
		{
			cout<<fr[i]<<' ';
		}
		cout<<endl;

		cout<<"QT: ";
		loop(i,0,11)
		{
			cout<<qt[i]<<' ';
		}
		cout<<endl;

		cout<<"SET: ";
		for(auto v: ca)
			cout<<v<<' ';
		cout<<endl;
	*/	
		int en = fr[a[i]];
		
		if(en > 0)
			qt[en]--;
		
		if(!qt[en] and en > 0 and ca.count(en) != 0)
			ca.erase(en);
		
		fr[a[i]]++;
		
		en = fr[a[i]];
	
		qt[en]++;

		if(qt[en] > 0)
			ca.insert(en);
		
		if(ca.size() > 2)
			continue;

	//[	int oans = ans;
		
		if(ca.size() == 2)
		{
		
			int v[2];
			int x = 0;
	
			for(auto el: ca)
			{
				v[x++] = el;
			}

			if(v[0] > v[1])
				swap(v[0], v[1]);


			if((v[0] == 1 and qt[1] == 1) or (v[1] == v[0] + 1 and qt[v[1]] == 1))
				ans = i + 1;
		
		}
		else if(ca.size() == 1)
		{
	
			int cfr = *ca.begin();
		
			if(cfr == 1 or qt[cfr] == 1)
				ans = i + 1;
		
		}

	//	if(oans != ans)
	//		cout<<"VAL ANS\n";

		/*

		loop(j,1,11)
		{
			if(fr[j] == 0)
				continue;

			fr[j]--;
			
			bool vval = 1;
			
			loop(k,1,11)
			{
				loop(k2,k + 1, 11)
				{
					if(fr[k] > 0 and fr[k2] > 0 and fr[k] != fr[k2])
						vval = false;
				}
			}
			
			fr[j]++;

			if(vval)
			{
				val = true;
			}
		}

		*/
	}

	cout<<ans<<endl;

	return 0;
}
