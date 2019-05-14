#include <iostream>

using namespace std;

int main()
{
    char op;float x;int n=0;
    cin >> op;
    float s=0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin >> x;
            if(i+j>11&&i<j){
                s+=x;
                n++;
            }
        }
    }
    if(op=='S'||op=='s'){
        printf("%.1f\n",s);
    }else{
        s/=float(n);
       printf("%.1f\n",s);
    }
}
