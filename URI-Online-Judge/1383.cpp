#include <iostream>

using namespace std;

int m[9][9];

bool comp(int a[9]){
    bool r=true;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(a[i]==a[j])r=false;
        }
    }
    return r;
}

int main()
{
    int c;
    cin >>c;
    for(int i=1;i<=c;i++){
        for(int j=0;j<9;j++){
            for(int k=0;k<9;k++){
                cin>>m[j][k];
            }
        }
        int sf=0;
        for(int j=0;j<9;j++){
            int cn[9],cm[9];
            for(int k=0;k<9;k++){
                cn[k]=m[j][k];
                cm[k]=m[k][j];
            }
            sf+=comp(cn);
            sf+=comp(cm);
        }
        for(int j=0;j<3;j++){
            for(int q=0;q<3;q++){
                int cn[9];
                int a=0;
                for(int k=j*3;k<(j+1)*3;k++){
                    for(int l=q*3;l<(q+1)*3;l++){
                        cn[a]=m[k][l];
                        a++;
                    }
                }
                sf+=comp(cn);
            }
        }
        if(sf==27)cout << "Instancia " << i << endl << "SIM\n";
        else cout << "Instancia " << i << endl << "NAO\n";
        cout << endl;
    }
    return 0;
}
