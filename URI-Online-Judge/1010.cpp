#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int cp1;
     int cp2;
     int np1;
     int np2;
     double vp1;
     double vp2;
     scanf("%d",&cp1);
     scanf("%d",&np1);
     scanf("%lf",&vp1);
     scanf("%d",&cp2);
     scanf("%d",&np2);
     scanf("%lf",&vp2);
     printf("VALOR A PAGAR: R$ %.2lf\n",vp1*np1+vp2*np2);
 
    return 0;
}