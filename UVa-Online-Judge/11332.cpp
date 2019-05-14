#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    while(cin>>n,n[0]!='0'){
        while(n.size()>1){
            int v=0;
            for(int i=0;i<n.size();i++)v+=n[i]-48;
            n=to_string(v);
        }
        cout<<n<<endl;
    }
    return 0;
}
