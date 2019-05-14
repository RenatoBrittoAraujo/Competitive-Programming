#include <iostream>

using namespace std;

int main()
{
    int c[4],f[4],s[4];string x;
    cin >> x >> c[0] >> c[1]>> x >> c[2]>> x >> c[3] >> x >> f[0]>> f[1]>> x >> f[2]>> x >> f[3];
    if(f[3]>=c[3]){s[3]=f[3]-c[3];}
    else{s[3]=60+f[3]-c[3];f[2]--;}
    if(f[2]>=c[2]){s[2]=f[2]-c[2];}
    else{s[2]=60+f[2]-c[2];f[1]--;}
    if(f[1]>=c[1]){s[1]=f[1]-c[1];}
    else{s[1]=24+f[1]-c[1];f[0]--;}
    s[0]=f[0]-c[0];
    cout << s[0] << " dia(s)\n" <<  s[1] << " hora(s)\n" << s[2] << " minuto(s)\n" << s[3] << " segundo(s)\n";
    return 0;

}
