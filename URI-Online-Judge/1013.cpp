#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int a;
     int b;
     int c;
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     if (a>b&&a>c){
         printf("%d eh o maior\n",a);
     } else if (b>a&&b>c){
         printf("%d eh o maior\n",b);
     } else {
         printf("%d eh o maior\n",c);
     }
 
    return 0;
}