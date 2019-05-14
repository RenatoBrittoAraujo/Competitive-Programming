#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    while(cin >>a,!cin.eof()){
        if(a>0)cout << "vai ter duas!\n";
        else cout << "vai ter copa!\n";
    }
}
