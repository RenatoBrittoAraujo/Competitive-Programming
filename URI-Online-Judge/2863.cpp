#include <iostream>

using namespace std;

int main(){
    int c;
    while(cin>>c,!cin.eof()){
        float me,x;
        for(int i=0;i<c;i++){cin>>x;if(i==0||me>x)me=x;}
        printf("%.2f\n",me);
    }
    return 0;
}
