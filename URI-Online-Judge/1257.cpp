#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        int ha=0;
        string a;
        for(int i=0;i<n;i++){
            cin>>a;
            int t=a.size();
            for(int j=0;j<t;j++){
                int v = (int)a[j]-65;
                //cout << v<< endl;
                ha+=i+j+v;
            }
        }
        cout << ha << endl;
    }
    return 0;
}
