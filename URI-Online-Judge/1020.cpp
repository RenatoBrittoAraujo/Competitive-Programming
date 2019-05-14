#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a;
     scanf("%d",&a);
     
     printf("%d ano(s)\n",a/365);
     int b = (a - (a/365)*365)/30;
     int c = a - (a/365)*365 - b*30;
     printf("%d mes(es)\n",b);
     printf("%d dia(s)\n",c);
 
    return 0;
}