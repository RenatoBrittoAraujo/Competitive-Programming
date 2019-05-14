#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m;
    while(cin>>m,!cin.eof()){
        int n,c,ss=0,si=0;
        while(m--){
            cin >> n >> c;
            ss+=n*c;
            si+=c;
        }
        si*=100;
        float ira = float(ss)/float(si);
        printf("%.4f\n",ira);
    }
    return 0;
}
