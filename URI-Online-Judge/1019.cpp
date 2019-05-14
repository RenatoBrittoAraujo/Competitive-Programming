#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int a;
    scanf("%d",&a);
    int b = (a - (a/3600)*3600)/60;
    int c = a - (a/3600)*3600 - ((a - (a/3600)*3600)/60)*60;
    printf("%d:%d:%d\n",a/3600,b,c);
    return 0;
}
