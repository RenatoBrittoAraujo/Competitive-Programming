#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     double x1;
     double y1;
     double x2;
     double y2;
     scanf("%lf",&x1);
     scanf("%lf",&y1);
     scanf("%lf",&x2);
     scanf("%lf",&y2);
     printf("%.4lf\n",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
 
    return 0;
}