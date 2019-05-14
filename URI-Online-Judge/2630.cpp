#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string m;int a,b,c;float r;
        cin >> m >> a >> b >> c;
        if(m=="min")r = min(min(a,b),c);
        if(m=="eye")r = 0.3*float(a)+0.59*float(b)+0.11*float(c);
        if(m=="mean")r = float(a+b+c)/3;
        if(m=="max")r = max(max(a,b),c);
        r=int(r);
        cout << "Caso #" << i << ": " << r << endl;
    }
    return 0;
}
