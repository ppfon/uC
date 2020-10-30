/* |5.3|
 * 1. Uma deficiência da função aleat() mostrada no último exemplo é que,
 * Altere a função aleat() de modo que o valor da semente seja os 4 últimos 
 * dígitos do valor devolvido por time(). Tome o cuidado de não deixar a 
 * semente tornar-se 0 pois, nesse caso, todos os números gerados 
 * subsequentemente também serão 0.
 */

#include <stdio.h>
#include <time.h>

int
aleat(long int tempo) 
{
        unsigned semente = tempo % 10000;

        auto unsigned numAleat = semente % 100;
        printf("semente: %d\n", semente);

        return numAleat;
} 

int 
main(void) 
{
        int i; 
        long int tempo;
        time(&tempo);

        for (int i = 0; i < 10; i++) {
                tempo += tempo;
                printf("%d\n", aleat(tempo));
        }
        return 0;
}
