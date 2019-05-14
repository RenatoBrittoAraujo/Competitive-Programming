#include <bits/stdc++.h>

using namespace std;

map<string,int> pl;

int main()
{
    int m,n;
    cin>>m>>n;
    string s;int v;
    for(int i=0;i<m;i++){
        cin>>s>>v;
        pl[s]=v;
    }
    cin.ignore();
    for(int i=0;i<n;i++){
        v=0;
        string p;
        while(getline(cin,s),s[0]!='.'){
            p.clear();
            int j=0;
            while(j<s.size()){
                while(j<s.size()&&s[j]!=' '){
                    p+=s[j];
                    j++;
                }
                if(pl.find(p)!=pl.end())v+=pl[p];
                p.clear();
                j++;
            }
        }
        cout<<v<<endl;
    }
    return 0;
}
