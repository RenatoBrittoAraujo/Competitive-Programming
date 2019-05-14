#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while(a>0){
        while(a>=500){
            if(a/100==9)break;

            a-=500;
            cout << "D";
        }
        while(a>=100){
            if(a/100==9){
                cout << "CM";
                a-=900;
                break;
            }
            if(a/100==4){
                cout << "CD";
                a-=400;
                break;
            }
            a-=100;
            cout << "C";
        }
        while(a>=50){
            if(a/10==9)break;
            a-=50;
            cout << "L";
        }
        while(a>=10){
            if(a/10==9){
                cout << "XC";
                a-=90;
                break;
            }
            if(a/10==4){
                cout << "XL";
                a-=40;
                break;
            }
            a-=10;
            cout << "X";
        }
        while(a>=5){
            if(a==9)break;
            a-=5;
            cout << "V";
        }
        while(a>=1){
            if(a==9){
                cout << "IX";
                a-=9;
                break;
            }
            if(a==4){
                cout << "IV";
                a-=4;
                break;
            }
            a-=1;
            cout << "I";
        }
    }cout << endl;
    return 0;
}
