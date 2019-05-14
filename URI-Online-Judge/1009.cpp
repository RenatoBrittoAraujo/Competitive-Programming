#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     char *nome;
     double salario;
     double venda;
     scanf("%s",&nome);
     scanf("%lf",&salario);
     scanf("%lf",&venda);
     printf("TOTAL = R$ %.2lf\n",salario+(0.15*venda));
 
    return 0;
}