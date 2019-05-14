#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;n++;
    int v;
    while(n--,n){
        cin >> v;
        long long int val1=0;long long int val2=1;long long int f;
        for(int i=0;i<=v;i++){
            if(i%2==0){
                f=val1;
            }else{
                f=val2;
            }
            if(i==v){
                cout << "Fib("<<v<<") = " << f << endl;
            }
            if(i%2==0){
                val1+=val2;
            }else{
                val2+=val1;
            }
        }
    }
}
