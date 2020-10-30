/* |4.3|
 * Um número triangular é um número natural que pode ser representado na forma
 * de um triângulo equilátero. O n-ésimo número triangular pode ser visto como
 * o número de pontos de uma forma triangular com lado formado por n pontos, o
 * que equivale à soma dos primeiros n números naturais.
 * Números triangulares: 1, 3, 6, 10, 15, 21, 28, ... 
 * Faça um programa C que receba um número natural N(≥ 1) e mostre se ele é 
 * triangular ou não.
 */

#include <stdio.h>

int
main(void)
{
        int i, n; 

        puts("Entre com um número natural maior ou igual a 1:");
        scanf("%d", &n);

        for (i = 1; i <= n; i++) {
                if (((i*(i+1))/2) == n) {
                        puts("É um número triangular.");
                        break;
                }
                else if (i == n)
                        puts("Não é um número triangular.");
        }
        return 0;
}
