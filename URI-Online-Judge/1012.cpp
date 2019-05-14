#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     double a;
     double b;
     double c;
     scanf("%lf",&a);
     scanf("%lf",&b);
     scanf("%lf",&c);
     printf("TRIANGULO: %.3lf\n",a*c/2);
     printf("CIRCULO: %.3lf\n",c*c*3.14159);
     printf("TRAPEZIO: %.3lf\n",(a+b)*c/2);
     printf("QUADRADO: %.3lf\n",b*b);
     printf("RETANGULO: %.3lf\n",a*b);
 
    return 0;
}