#include <iostream>

using namespace std;

int main()
{
    char op;int l;float x;
    cin >> l;
    cin >> op;
    float s=0;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin >> x;
            if(j==l){
                s+=x;
            }
            //if(i>l&&i==11)break;
        }
    }
    if(op=='S'||op=='s'){
        printf("%.1f\n",s);
    }else{
        s/=float(12);
       printf("%.1f\n",s);
    }
}
