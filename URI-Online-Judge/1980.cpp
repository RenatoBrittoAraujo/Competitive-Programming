#include <iostream>

using namespace std;

int main()
{
    string p;
    while(cin>>p,!(p[0]=='0'&&p.size()==1)){
        long long int s=1;
        int t = p.size();
        for(int i=0;i<t;i++){
            s*=(i+1);
        }
        cout << s << endl;
    }
    return 0;
}

