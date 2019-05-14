#include <iostream>

using namespace std;

int main()
{
    int n;
    string p;
    cin >>n;n++;
    while(n--,n){
        cin >> p;
        int s=0;
        for(int i=0;i<p.size();i++){
            if(p[i]=='e')s++;
        }
        float x=float(s)/100 + 0.08;
        printf("%.2f\n",x);
    }
    return 0;
}
