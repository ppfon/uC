/*  Codifique um programa para solicitar 5 números, via teclado, e depois 
 *  apresente-os na ordem inversa a que foram digitados pelo usuário.
 */
#include <stdio.h>

int
main(void)
{
        int nums[5], i;

        for (i = 0; i < 5; i++) {
                puts("Entre com um número:");
                scanf("%d", &nums[i]);
        }

        puts("Números na ordem inversa à digitada:");
        for (i = 4; i >= 0; i--) 
                printf("%d\n", nums[i]);

        return 0;
}
