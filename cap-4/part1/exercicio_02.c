/* |4.2| 
 * 2. Dado um ano, informe se ele é ou não bissexto. 
 */

#include <stdio.h>

int 
main(void)
{
        int ano; 

        puts("Entre com um ano (AAAA):");
        scanf("%d", &ano);

        if ((!(ano % 4)) && (ano % 100))
                puts("O ano é bissexto.");
        else
                puts("Ano regular.");

        return 0;

}
