/* |4.3|
 * 1. Dada uma série de números positivos (finalizada com um valor nulo) que 
 * representam as idades das pessoas que moram num certo bairro, determine a
 * idade da pessoa mais nova e a da pessoa mais velha.
 */

#include <stdio.h>
#define FLAG 0 

int
main(void)
{
        int menor, maior, idade;

        menor = 9999;
        maior = 0;

        for (;;) {
                puts("Entre com a idade da pessoa:");
                scanf("%d", &idade);
                
                if (idade == FLAG)
                        break;
                else if (idade > maior)
                        maior = idade;
                if (idade < menor)
                        menor = idade;
        }
        printf("Maior e menor idade, respectivamente: %d, %d\n", maior, menor);

        return 0;
}
