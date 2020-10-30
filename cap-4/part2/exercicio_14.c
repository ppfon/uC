/* |4.2|
 * 4. Dado um número natural n, exiba seu fatorial n!.
 */

#include <stdio.h>

int
main(void)
{
        int i, n, f = 1;

        puts("Entre com um número natural:");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
                f *= i;

        printf("%d! = %d\n", n, f);
        
        return 0;
}
