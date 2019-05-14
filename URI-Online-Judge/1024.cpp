#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin>>c;
    cin.ignore();
    while(c--){
        string a;
        getline(cin,a);
        int t = a.size();
        for(int i=0;i<t;i++){
            int v=(int)a[i];
            if((v<=90&&v>=65)||(v<=122&&v>=97))
            a[i]=(char)(v+3);
        }
        reverse(a.begin(),a.end());
        for(int i=t/2;i<t;i++){
            int v=(int)a[i];
            //if((v<=90+3&&v>=65+3)||(v<=122+3&&v>=97+3))
            a[i]=(char)(v-1);
        }
        cout << a<< endl;
    }
    return 0;
}
