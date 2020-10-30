/* |4.3|
 * 1. Numa certa agência bancária, as contas-correntes são identificadas por 
 * números de até seis dígitos seguidos de um dígito verificador, calculado 
 * da seguinte forma:
 * Seja a conta-corrente identificada pelo número 5321.
 * 1º) Soma-se todo os dígitos do número da conta: s = 5+3+2+1 = 11;
 * 2º) Calcula-se o resto da divisão inteira da soma s por 10: d = s % 10 = 1
 * Número de conta-corrente com dígito verificador> 005321−1
 */

#include <stdio.h>

int
main(void)
{
        int conta, i, soma = 0; 

        puts("Entre com o número da conta corrente (sem código verificador):");
        scanf("%d", &conta);

        i = conta;

        while (i) {
                soma += i % 10;
                i /= 10;
        }

        printf("Número de conta corrente com dígito verificador: %06d-%d\n", \
                        conta, soma%10);
        return 0;
        
}
