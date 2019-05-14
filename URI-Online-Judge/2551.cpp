#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        float vm,v;int d,t;
        for(int i=1;i<=n;i++){
            cin >>t>>d;
            vm = float(d)/float(t);
            if(i==1||vm>v){
                cout << i << endl;
                v=vm;
            }
        }
    }
    return 0;
}
