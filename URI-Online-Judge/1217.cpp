#include <iostream>

using namespace std;

int main()
{
    int c;
    cin>>c;
    double s=0;
    double kg=0;
    float r1;string r2;
    for(int i=0;i<c;i++){
        cin >> r1;
        s+=r1;
        cin.ignore();
        getline(cin,r2);
        int m=1;
        int t = r2.size();
        for(int j=0;j<t;j++)if(r2[j]==' ')m++;
        kg+=m;
        cout << "day " << i+1 << ": " << m << " kg\n";
    }
    s/=float(c);
    kg/=float(c);
    printf("%.2f kg by day\nR$ %.2f by day\n",kg,s);
    return 0;
}
