/* |4.2|
 * 1. Dado um número real qualquer informado pelo usuário, mostre o valor absoluto dele. 
 */ 

#include <stdio.h>

int 
main(void) 
{
        float numero;

        puts("Entre com um número real qualquer:");
        scanf("%f", &numero);

        printf("Valor absoluto: %f\n", \
                        (numero < 0) ? (-numero) : numero);

        return 0;

 }
