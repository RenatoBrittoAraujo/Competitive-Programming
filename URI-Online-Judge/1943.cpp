#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[7]={1,3,5,10,25,50,100};
    for(int i=0;i<7;i++){
        if(n<=t[i]){cout << "Top " << t[i] << endl;break;}
    }
    return 0;
}
