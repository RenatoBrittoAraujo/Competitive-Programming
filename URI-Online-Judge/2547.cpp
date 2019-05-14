#include <iostream>

using namespace std;

int main()
{
    int n,hmi,hma,s=0,x;
    while(cin >> n >> hmi >> hma,!cin.eof()){
    s=0;
    while(n--){
        cin>>x;
        if(x>=hmi&&x<=hma)s++;
    }
    cout << s << endl;
    }
    return 0;
}
