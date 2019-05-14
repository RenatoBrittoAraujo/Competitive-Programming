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
     int d;
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     scanf("%d",&d);
     if(b>c&&d>a&&(c+d)>(a+b)&&c>0&&d>0&&a%2==0){
         printf("Valores aceitos\n");
     } else {
         printf("Valores nao aceitos\n");
     }
     
 
    return 0;
}