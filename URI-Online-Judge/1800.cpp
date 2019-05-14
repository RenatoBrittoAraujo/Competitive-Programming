#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int q,e,n;
    cin>>q>>e;
    int ne[e];
    for(int i=0;i<e;i++)cin>>ne[i];
    vector<int> je;
    for(int i=0;i<q;i++){
        cin >> n;
        bool ac=false;
        bool re=false;
        for(int j=0;j<e;j++){
            if(ne[j]==n){ac=true;break;}
        }
        for(int i=0;i<je.size();i++){
            if(n==je[i])re=true;
        }
        if(!re)je.push_back(n);
        if(!ac&&!re)cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}
