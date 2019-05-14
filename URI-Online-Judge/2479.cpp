#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

char alf[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main()
{
    int n;
    cin>>n;
    string no[n];
    string fn[n];
    char a;
    int sc=0,nsc=0;
    for(int i=0;i<n;i++){
        cin>>a>>no[i];
        if(a=='+')sc++;
        else nsc++;
    }
    sort(no,no+n);
    for(int i=0;i<n;i++){
        cout << no[i] << endl;
    }
    cout << "Se comportaram: " << sc <<" | Nao se comportaram: " << nsc << endl;
    return 0;
}
