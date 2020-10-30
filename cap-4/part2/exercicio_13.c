/* |4.2| 
 * 3. Dados um número real x e um número natural n, calcule e mostre uma tabela
 * de potências x^n para valores de 0 a n.
 */ 

#include <stdio.h>
#include <math.h>

int
main(void)
{
        float x; 
        int i, n;

        puts("Entre com um número real e outro natural separados por um espaço:");
        scanf("%f %d", &x, &n);

        for (i = 0; i <= n; i++) 
                printf("%.3f ^ %d = %.3f\n", x, i, pow(x,i));
        
        return 0;
}
