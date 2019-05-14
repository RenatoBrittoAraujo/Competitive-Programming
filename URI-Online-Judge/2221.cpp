#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int b;
        cin >> b;
        float ai,di;
        float bi,bdi;
        int li,bli;
        cin >> ai>>di>>li>>bi>>bdi>>bli;
        float da1=(ai+di)/2;
        float da2=(bi+bdi)/2;
        if(li%2==0)da1+=b;
        if(bli%2==0)da2+=b;
        if(da1>da2)cout << "Dabriel\n";
        else if(da1==da2)cout << "Empate\n";
        else cout << "Guarte\n";
    }
    return 0;
}
