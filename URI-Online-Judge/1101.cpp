#include <iostream>

using namespace std;

int main()
{
    int m,n;
    while(cin >> m>>n,m>0&&n>0){
        if(n>m){int t=n;n=m;m=t;}
        int s=0;
        for(int i=n;i<=m;i++){
            cout << i << " ";
            s+=i;
        }
        cout << "Sum=" << s << endl;
    }
    return 0;

}
