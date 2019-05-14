#include <iostream>
using namespace std;

int main()
{
    int a;string b;int nc=0;
    cin >> a;
    while(a>16){
        nc++;
        int d = a%16;
        if(d<10){

            b+=to_string(d);
        }else{
            switch(d){
                case 10:
                    b+="A";
                break;
                case 11:
                    b+="B";
                break;
                case 12:
                    b+="C";
                break;
                case 13:
                    b+="D";
                break;
                case 14:
                    b+="E";
                break;
                case 15:
                    b+="F";
                break;

            }

        }
        a=a/16;
    }
    nc++;
    int d = a;
        if(d<10){
            b+=to_string(d);
        }else{
            switch(d){
                case 10:
                    b+="A";
                break;
                case 11:
                    b+="B";
                break;
                case 12:
                    b+="C";
                break;
                case 13:
                    b+="D";
                break;
                case 14:
                    b+="E";
                break;
                case 15:
                    b+="F";
                break;
                case 16:
                    b+="01";nc++;
                break;

            }

        }
        for(int i=nc-1;i>=0;i--){
            cout << b[i];
        }cout <<endl;

    return 0;
}
