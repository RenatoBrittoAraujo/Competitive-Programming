#include <bits/stdc++.h>

using namespace std;

int main(){
    int co,ca,s;
    while(cin>>co>>ca>>s,!cin.eof()){
        double prob1,prob2;
        prob1 = (co/double(ca+co))*(ca/double(ca+co-s-1));
        prob2 = ((ca-1)/double(co+ca))*(ca/double(ca+co-s-1));
        printf("%.5f\n",prob1+prob2);
    }
    return 0;
}
