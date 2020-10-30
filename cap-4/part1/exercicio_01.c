/* |4.2| 
 * 1. Dados dois números inteiros, mostre o maior deles. 
 */

#include <stdio.h>

int 
main(void) 
{
        int a, b;

        puts("Entre com dois números inteiros distintos separados por um espaço:");
        scanf("%d %d", &a, &b);

       if (a > b)
               printf("%d é o maior número.\n", a);
       else if (b > a)
               printf("%d é o maior número.\n", b);
       else {
                puts("Os números são idênticos.");
                return 1;
       }

       return 0;
}
