#include <iostream>

using namespace std;

int main()
{
    string a,b;
    while(getline(cin,a),getline(cin,b),!cin.eof()){
        int t1=a.size();
        int t2=b.size();
        //for(int i=0;i<t1;i++)a[i]=tolower(a[i]);
        //for(int i=0;i<t2;i++)b[i]=tolower(b[i]);
        int ms=0;
        for(int i=0;i<t1;i++){
            for(int j=0;j<t2;j++){
                if(a[i]==b[j]){
                    int s=0;
                    int ii=i,jj=j;
                    while(a[ii]==b[jj]){s++;ii++;jj++;if(ii==t1)break;if(jj==t2)break;}
                    //if(a[ii-1]==' ')s--;
                    if(s>ms)ms=s;
                }
            }
        }
        cout << ms << endl;
    }
    return 0;
}
