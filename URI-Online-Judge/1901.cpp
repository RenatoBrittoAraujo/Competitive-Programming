#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int b[n][n];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>b[i][j];
    int nb=0,x,y;
    vector<int> c;
    for(int i=0;i<2*n;i++){
        cin>>x>>y;
        int v = b[x-1][y-1];
        bool co=false;
        for(int j=0;j<c.size();j++)if(c[j]==v){co=true;}
        if(!co)c.push_back(v);
    }
    cout << c.size() << endl;
    return 0;
}
