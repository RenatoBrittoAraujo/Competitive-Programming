#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    string n;
    float d,s,ma,me,x;
    for(int i=0;i<c;i++){
        s=0;
        cin >> n >> d;
        for(int i=0;i<7;i++){
            cin >> x;
            if(i==0){ma=x;me=x;}
            s+=x;
            if(x>ma)ma=x;
            if(x<me)me=x;
        }
        s-=me+ma;
        s*=d;
        cout << n;printf(" %.2f\n",s);
    }
    return 0;
}
