/* |4.3|
 * 2. Um comerciante precisa informatizar o caixa de sua loja. Para isso ele 
 * precisa de um programa que leia uma série de valores correspondendo aos 
 * preços das mercadorias compradas por um cliente (o valor zero finaliza a 
 * entrada), calcule o valor total, subtraia deste valor o desconto devido 
 * (vide tabela) e, finalmente, mostre o valor a ser pago pelo cliente.
 */

#include <stdio.h>
#define FLAG 0.0

int
main(void)
{
        float preço, total, desconto;

        total = 0;

        for (;;) {
                puts("Entre com o preço da mercadoria:");
                scanf("%f", &preço);
                
                if (preço == FLAG) 
                        break;
                else
                        total += preço; 
        }

        if (total < 500.0)
                desconto = 0.05;
        else if (total <= 1000.0)
                desconto = 0.1;
        else if (total <= 2000.0)
                desconto = 0.15;
        else
                desconto = 0.2;

        printf("Total a ser pago: %.3f\n", total*(1-desconto));

        return 0;
}
