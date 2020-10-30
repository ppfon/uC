/* |4.2|
 * 1. O quadrado de um número natural n é dado pela soma dos n primeiros 
 * números ímpares consecutivos. 
 * Exemplos:  1^2=1, 2^2=1+3, 3^2=1+3+5, 4^2=1+3+5+7 etc. Dado um número n, 
 * calcule seu quadrado usando a soma de ímpares ao invés do produto ou 
 * da função pow( ).
 */

#include <stdio.h>

int
main(void)
{
        int n, i, soma, impar;
        soma =  impar = 1;

        puts("Entre com um número natural:");
        scanf("%d", &n);

        for (i = 2; i <= n; i++)
                soma += impar += 2;

        printf("%d ^ 2 = %d\n", n, soma);

        return 0;
}
