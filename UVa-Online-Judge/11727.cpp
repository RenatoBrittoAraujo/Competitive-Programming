#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    for(int i=1;i<=c;i++){
        vector<int> s;int x;
        for(int i=0;i<3;i++){cin>>x;s.push_back(x);}
        sort(s.begin(),s.end());
        cout<<"Case "<<i<<": "<<s[1]<<endl;

    }
    return 0;
}
