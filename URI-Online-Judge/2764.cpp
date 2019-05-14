#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int aa = stoi(a.substr(6,2));
    int mm = stoi(a.substr(3,2));
    int dd = stoi(a.substr(0,2));
    printf("%.2d/%.2d/%.2d\n%.2d/%.2d/%.2d\n%.2d-%.2d-%.2d\n",mm,dd,aa,aa,mm,dd,dd,mm,aa);
    return 0;
}
