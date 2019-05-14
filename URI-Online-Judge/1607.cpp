#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        string a,b;
        cin>>a>>b;
        int op=0;
        int t = a.size();
        for(int i=0;i<t;i++){
            while(a[i]!=b[i]){
                int v = (int)a[i];
                v++;
                if(v>122)v-=26;
                a[i]=(char)v;
                op++;
            }
        }
        cout << op << endl;
    }
    return 0;
}
