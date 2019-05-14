#include <iostream>

using namespace std;

int main()
{
    int c;
    while(cin>>c,c){
        string n[c];
        int t[c];
        int a,b,in,an;
        for(int i=0;i<c;i++){
            cin>>n[i]>>a>>b;
            t[i]=a-b;
            if(i==0||t[i]<an){in=i;an=t[i];}
        }
        cout << n[in] << endl;
        }
    return 0;
}

