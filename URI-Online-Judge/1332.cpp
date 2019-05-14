#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        string a;
        cin>>a;
        int t = a.size();
        int r;
        if(t==5)r=3;
        else{
            if((a[0]=='o'&&a[1]=='n')||(a[1]=='n'&&a[2]=='e')||(a[0]=='o'&&a[2]=='e'))r=1;
            else r=2;
        }
        cout << r << endl;
    }
    return 0;
}
