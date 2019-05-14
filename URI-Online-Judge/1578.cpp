#include <iostream>
#include <sstream>

using namespace std;

string intstr (unsigned long long int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

int main()
{
    int c;
    cin>>c;
    for(int i=4;i<=c+3;i++){
        int t;
        cin >> t;
       unsigned long long m[t][t],x;
        string p[t][t];
        for(int j=0;j<t;j++)for(int k=0;k<t;k++){scanf("%llu",&x);m[j][k]=x*x;}
        for(int j=0;j<t;j++){
            int me;
            for(int k=0;k<t;k++){
                string a = intstr(m[k][j]);
                int s = a.size();
                if(k==0||me<s){me=s;}
            }
            for(int k=0;k<t;k++){
                string a = intstr(m[k][j]);
                int s = a.size();
                for(int i=s;i<me;i++)p[k][j]+=" ";
                p[k][j]+=a;
            }
        }
        printf("Quadrado da matriz #%d:\n",i);
        for(int j=0;j<t;j++){
            for(int k=0;k<t;k++){
                cout << p[j][k];
                if(k!=t-1)cout << " ";
            }
            cout << endl;
        }
        if(i!=c+3)cout << endl;
    }
    return 0;
}
