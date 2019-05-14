#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n,!cin.eof()){
        string c[n];int d[n];
        for(int i=0;i<n;i++){
            cin >>c[i]>>d[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(d[j]<d[i]){
                    int t1=d[i];
                    string a=c[i];
                    d[i]=d[j];
                    c[i]=c[j];
                    d[j]=t1;
                    c[j]=a;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << c[i];
            if(i!=n-1)cout << " ";
        }cout << endl;
    }
    return 0;
}
