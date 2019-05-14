#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--){
        string a;
        cin>>a;
        int s=0;
        for(int i=0;i<a.size();i++){
            switch(a[i]){
                case '9':case '0':case '6':
                    s+=6;
                    break;
                case '2':case '3':case '5':
                    s+=5;
                    break;
                case '1':
                    s+=2;
                    break;
                case '4':
                    s+=4;
                    break;
                case '7':
                    s+=3;
                    break;
                case '8':
                    s+=7;
                break;
            }
        }
         cout << s << " leds\n";
    }
    return 0;
}
