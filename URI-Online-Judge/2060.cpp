#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[4]={0},x;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%2==0)a[0]++;
        if(x%3==0)a[1]++;
        if(x%4==0)a[2]++;
        if(x%5==0)a[3]++;
    }
    cout << a[0] << " Multiplo(s) de 2\n";
    cout << a[1] << " Multiplo(s) de 3\n";
    cout << a[2] << " Multiplo(s) de 4\n";
    cout << a[3] << " Multiplo(s) de 5\n";
    return 0;
}
