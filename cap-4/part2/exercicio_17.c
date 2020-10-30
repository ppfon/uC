/* |4.3|
 * 1. Dados dois números naturais m e n, exiba um retângulo com m caracteres 
 * de altura e n caracteres de largura.
 */

#include <stdio.h>

int
main(void)
{
        int m, n, alt, lar; 

        puts("Entre com a altura e largura separadas por um espaço:");
        scanf("%d %d", &m, &n);

        for (alt = 1; alt <= m; alt++) {
                for (lar = 1; lar <= n; lar++) {
                        printf("*");
                if (lar == n) 
                        printf("\n");
                }
        }

        return 0;
}
