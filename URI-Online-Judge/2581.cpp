#include <iostream>

using namespace std;

int main()
{
    int n;
    string x;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin,x);
        cout << "I am Toorg!\n";
    }
    return 0;
}
