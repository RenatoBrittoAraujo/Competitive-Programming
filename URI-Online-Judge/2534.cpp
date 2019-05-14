#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,q;
    while(cin >> n >> q,!cin.eof()){
    int no[n];
    for(int i=0;i<n;i++){
        cin>>no[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(no[i]<no[j]){int t=no[i];no[i]=no[j];no[j]=t;}
        }
    }
    int qi;
    while(q--){
        cin >> qi;
        cout << no[qi-1] << endl;
    }
    }
    return 0;
}
