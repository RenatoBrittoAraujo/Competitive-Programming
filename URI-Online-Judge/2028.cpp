#include <iostream>

using namespace std;

int main()
{
    int n,c=1;
    while(scanf("%d",&n)!=EOF){
        int t = 0;
        for(int i=0;i<=n;i++){
            if(i==0)t++;
            else t+=i;
        }
        int nu[t];
        int v=1,r=0;
        for(int i=0;i<t;i++){
            if(i==0)nu[i]=0;
            else{
                nu[i]=v;
                r++;
                if(r==v){
                    r=0;
                    v++;
                }
            }
        }
        if(n==0)cout << "Caso "<<c<<": "<< 1 << " numero\n0";
        else{
            cout << "Caso "<<c<<": "<< t << " numeros\n";
            for(int i=0;i<t;i++){
                cout << nu[i];if(i!=t-1)cout << " ";
            }
        }cout << endl << endl;
        c++;
    }
    return 0;
}
