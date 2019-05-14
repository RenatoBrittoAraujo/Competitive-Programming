#include <iostream>

using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k,bool(n+k)){
        int q[n]={0};
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            q[x-1]++;
        }
        int s=0;
        for(int i=0;i<n;i++){
            if(q[i]>=k)s++;
        }
        cout << s << endl;
    }
    return 0;
}

