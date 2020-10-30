/* |4.3|
 * 2. Exiba uma tabela de conversão de polegadas em centímetros, variando as 
 * polegadas de 0 a 10, de 0,5 em 0,5. Lembrete: 1" = 2,54 cm.
 */

#include <stdio.h>
#define RAZAO 2.54

int 
main(void) 
{
        float i;

        for (i = 0; i <= 10; i += 0.5) 
                printf("%.1f\" = %.2f\n", i, i*RAZAO);

        return 0;
}
