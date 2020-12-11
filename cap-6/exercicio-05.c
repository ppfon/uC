/* Codifique um programa que indique a quantidade mínima de cédulas equivalente
 * a uma dada quantia em dinheiro. Considere apenas valores inteiros e cédulas 
 * de 1, 2, 5, 10, 50, 100 e 200 reais
 */

#include <stdio.h>

int main(void)
{
        int montante, i, qtd_cedulas[7], cedulas[7] = {200, 100, 50, 10, 5, 2, 1};

        puts("Entre com o montante em reais:");
        scanf("%d", &montante);

        for (i = 0; i < 7; i++) {
                qtd_cedulas[i] = montante/cedulas[i];
                if (montante) 
                        montante -= (cedulas[i]*qtd_cedulas[i]);
        }

        printf("Cédula\t\tQuantidade\n");
        for (i = 0; i < 7; i++) 
                printf("R$ %d\t\t%d\n", cedulas[i], qtd_cedulas[i]);

        return 0;
}
