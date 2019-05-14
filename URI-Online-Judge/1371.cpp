#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        vector<int> s;
        int i=1;
        while(i*i<=n){
            s.push_back(i*i);
            i++;
        }
        for(int i=0;i<s.size();i++){
            cout<<s[i];
            if(s.size()-1!=i)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
