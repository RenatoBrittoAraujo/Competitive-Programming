#include <iostream>

using namespace std;

int main()
{
    string n;
    int d;
    double dm;
    int dt=0;
    int na=0;
    while(getline(cin,n),cin>>d,!cin.eof()){
        na++;
        dt+=d;
        cin.ignore();
    }
    dm=float(dt)/float(na);
    printf("%.1f\n",dm);
    return 0;
}
