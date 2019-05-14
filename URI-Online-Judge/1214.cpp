#include <iostream>

using namespace std;

int main()
{
    int nct,alunos,snotas,nota[1000],acm;
    double mnotas,out;
    cin >> nct;
    for(int i =0;i<nct;i++){
        cin >> alunos;
        snotas=0;
        for(int j=0;j<alunos;j++){
            cin >> nota[j];
            snotas+=nota[j];
        }
        mnotas = snotas/alunos;
        acm=0;
        for(int j=0;j<alunos;j++){
            if(nota[j]>mnotas)acm++;
        }
        out = float(acm)/float(alunos);
        out*=100;
        printf("%.3f%%\n",out);
    }
    return 0;
}
