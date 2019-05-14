#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a;
    scanf("%d",&a);
    int b;
    int c;
    printf("%d\n",a);
    printf("%d nota(s) de R$ 100,00\n",a/100);
    c = (a - (a/100)*100)/50;
    b = a - (a/100)*100;
    printf("%d nota(s) de R$ 50,00\n",c);
    b = b - c*50;
    c = (b - (b/50)*50)/20;
    printf("%d nota(s) de R$ 20,00\n",c);
    b = b - c*20;
    c = (b - (b/20)*20)/10;
    printf("%d nota(s) de R$ 10,00\n",c);
    b = b - c*10;
    c = (b - (b/10)*10)/5;
    printf("%d nota(s) de R$ 5,00\n",c);
    b = b - c*5;
    c = (b - (b/5)*5)/2;
    printf("%d nota(s) de R$ 2,00\n",c);
    b = b - c*2;
    c = (b - (b/2)*2)/1;
    printf("%d nota(s) de R$ 1,00\n",c);

    return 0;
}
