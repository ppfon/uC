/* |4.3|
 * 4. A função rand( ), definida em stdlib.h, gera números aleatórios no 
 * intervalo de 0 a 32767. Crie um programa para gerar N números (6 ≤ N ≤ 8)
 * para se apostar na Megasena (valores de 1 a 60). 
 * Dica: rand( ) % 100 gera um número entre 0 e 99
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM_INFERIOR 1
#define LIM_SUPERIOR 60

int
main(void)
{
        int aposta, qtd_limite, qtd_apostas;
       
        puts("Entre com a quantidade de dezenas desejadas:");
        scanf("%d", &qtd_limite);

        /* melhorando a entropia do rand p/ obter resultados diferentes a 
         * cada execução, já que a seed padrão de rand() é dada ao inicializar
         * a máquina... tempo em segundos desde o epoch
         */

        srand(time(NULL));

        for (qtd_apostas = 1; qtd_apostas <= qtd_limite;) {
                aposta = rand() % 100;

                if (aposta <= LIM_SUPERIOR && aposta >= LIM_INFERIOR) {
                        printf("%d ", aposta);
                        qtd_apostas++;
                }
        }
        
        puts("");

        return 0;
}
