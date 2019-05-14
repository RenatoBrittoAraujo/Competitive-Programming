#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        int n;
        cin>>n;
        bool o=true;
        string x,y;
        for(int i=0;i<n;i++){
            cin>>x;
            if(i>0&&x!=y)o=false;
            y=x;
        }
        if(o)cout << x << endl;
        else cout << "ingles\n";
    }
    return 0;
}
