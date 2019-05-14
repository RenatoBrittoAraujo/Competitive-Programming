#include <bits/stdc++.h>

using namespace std;

int main(){
    double x,y;
    int t=1;
    while(cin>>x>>y,!cin.eof()){
        cout<<"Projeto "<<t<<":\n";
        double p = y/x-1;
        printf("Percentual dos juros da aplicacao: %.2f %%\n",p*100);
        t++;
        cout<<endl;
    }
    return 0;
}
