#include <iostream>

using namespace std;

int main()
{
    int c;
    while(cin>>c,!cin.eof()){
        string a[c];int b[c];
        for(int i=0;i<c;i++){cin>>a[i];b[i]=stoi(a[i]);}
        for(int i=0;i<c;i++){
            for(int j=i+1;j<c;j++){
                if(b[i]>b[j]){
                    string t1=a[i];
                    int t2 = b[i];
                    a[i]=a[j];
                    b[i]=b[j];
                    a[j]=t1;
                    b[j]=t2;
                }
            }
        }
        for(int i=0;i<c;i++){
            cout <<a[i] << endl;
        }
    }

    return 0;
}
