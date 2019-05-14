#include <stdio.h>

int main() {
     double a,b,c,d;
     scanf("%lf",&a);
     scanf("%lf",&b);
     scanf("%lf",&c);
     scanf("%lf",&d);
     double e = (a*2+b*3+c*4+d)/10;
     printf("Media: %.1lf\n",e);
     if(e>=7){
         printf("Aluno aprovado.\n");
     } else if (e<5){
         printf("Aluno reprovado.\n");
     } else{
         printf("Aluno em exame.\n");
         double f;
         scanf("%lf",&f);
         printf("Nota do exame: %.1lf\n",f);
         if((e+f)/2 >= 5){
             printf("Aluno aprovado.\n");
         }else{
         printf("Aluno reprovado.\n");
         }
         printf("Media final: %.1lf\n",(e+f)/2);
     }
    return 0;
}
