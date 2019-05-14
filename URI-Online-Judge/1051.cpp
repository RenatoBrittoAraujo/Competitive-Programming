#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    float f;
    bool a=true;
    cin >> f;
    if(f<=2000){
        a=false;
        cout << "Isento\n";
    }else if(f<=3000){
        f=(f-2000)*0.08;
    }else if(f<=4500){
        f=(f-3000)*0.18+1000*0.08;
    }else{
        f=(f-4500)*0.28+1500*0.18+1000*0.08;
    }
    if(a){printf("R$ %.2f\n",f);}
    return 0;
}
