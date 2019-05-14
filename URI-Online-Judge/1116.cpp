#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float x,y;
    float a;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        if(y==0){
            cout << "divisao impossivel\n";
        }else{
            a=x/y;
            printf("%.1f\n",a);
        }
    }
    return 0;

}
