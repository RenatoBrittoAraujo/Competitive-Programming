#include <bits/stdc++.h>
using namespace std;

using ii = pair<int,int>;
using iii = pair<int,ii>;

vector<iii> o;
int vg[1010];

int main()
{
    int n,k;
    while(cin>>n>>k,bool(n+k)){
        o.clear();
        memset(vg,0,sizeof vg);
        int a,b;
        bool val=1;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            o.push_back(iii(a,ii(i,0)));
            o.push_back(iii(b,ii(i,1)));
        }
        sort(o.begin(),o.end());
        stack<int> c;
        int t=o.size();
        for(int i=0;i<t;i++){
            if(o[i].second.second==0)c.push(o[i].second.first);
            else if(o[i].second.first!=c.top()){val=0;}
            else c.pop();
            if(c.size()>k){val=0;break;}
            if(!val)break;
        }
        val?cout<<"Sim\n":cout<<"Nao\n";
    }
    return 0;
}
