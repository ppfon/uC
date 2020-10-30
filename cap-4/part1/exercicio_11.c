/* |4.3|
 * 1. Dado um valor n, exiba uma contagem regressiva até 1 (inclusive) */

#include <stdio.h>

int
main(void)
{
        int i, n; 

        puts("Entre com um número natural qualquer:");
        scanf("%d", &n);

        for (i = n; i > 0; i--)
                printf("%d ", i);
        puts("");

        return 0;
}
