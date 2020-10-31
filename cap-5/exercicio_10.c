/* |5.3|
 * 1. Uma deficiência da função aleat() mostrada no último exemplo é que,
 * Altere a função aleat() de modo que o valor da semente seja os 4 últimos 
 * dígitos do valor devolvido por time(). Tome o cuidado de não deixar a 
 * semente tornar-se 0 pois, nesse caso, todos os números gerados 
 * subsequentemente também serão 0.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int
aleat(long int tempo)
{
        /* não é mais estática porque seu valor é atribuido após a compilação*/
        auto unsigned semente, numAleat;

        semente = tempo%10000;

        if (!(semente))
                semente = rand();

        numAleat = semente % 100;

        return numAleat;
}

int
main(void)
{
        int i;
        long int tempo;

        time(&tempo);

        for (i = 0; i < 10; i++) {
                tempo += tempo/13;
                printf("%d\n", aleat(tempo));
        }

        return 0;
}
