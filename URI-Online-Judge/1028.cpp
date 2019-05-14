#include <iostream>

using namespace std;

// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0 || b == 0)
       return 0;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int mdc=gcd(a,b);
        cout << mdc << endl;
    }
    return 0;
}
