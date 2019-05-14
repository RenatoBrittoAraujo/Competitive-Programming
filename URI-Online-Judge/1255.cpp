#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    cin.ignore();
    while(c--){
        string a;
        getline(cin,a);
        int f[26][2]={0};
        int ta = a.size();
        string b;
        for(int i=0;i<ta;i++)if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))b+=tolower(a[i]);
        int tb = b.size();
        for(int i=0;i<tb;i++){
            f[(int)b[i]-97][0]++;
        }
        int ma=-1;
        for(int i=0;i<26;i++){f[i][1]=97+i;if(f[i][0]>ma)ma=f[i][0];}
        for(int i=0;i<26;i++){
            for(int j=i+1;j<26;j++){
                if(f[i][0]<f[j][0]){
                    int t1 = f[i][0];
                    int t2 = f[i][1];
                    f[i][0]=f[j][0];
                    f[i][1]=f[j][1];
                    f[j][0]=t1;
                    f[j][1]=t2;
                }
            }
        }
        for(int i=0;i<26;i++){
            if(f[i][0]>=ma)cout << (char)f[i][1];
        }cout << endl;
    }
    return 0;
}
