#include <iostream>

using namespace std;

int main()
{
    string n;
    while(cin>>n,n[0]!='0'){
        int d=0;
        for(int i=n.size()-1;i>-1;i--){
            int v = int(n[i])-48;
            int f=1;
            for(int j=0;j<n.size()-i;j++)f*=(j+1);
            //cout<<f<<" "<<v<<endl;
            d+=f*v;
        }
        cout<<d<<endl;
    }
    return 0;
}
