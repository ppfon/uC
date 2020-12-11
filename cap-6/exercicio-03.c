/* Implemente um algoritmo para calcular o desvio padrão δ de uma coleção de
 * n números reais, n ≤ 100, de acordo com a seguinte fórmula
 */

#include <stdio.h>
#include <math.h>
#define QTD_AMOSTRAS 100

int main(void)
{
        float nums[QTD_AMOSTRAS], media, soma, variancia, desvio;
        int i;

        soma = variancia = 0;

        for (i = 0; i < QTD_AMOSTRAS; i++) {
                printf("Entre com o real de posição %d:\n", i);
                scanf("%f", &nums[i]);
                soma += nums[i];
        }        
        
        media = soma/i; 

        for (i = 0; i < QTD_AMOSTRAS; i++)
                variancia += (powf((nums[i]-media),2));

        desvio = sqrtf(variancia/QTD_AMOSTRAS);

        printf("Desvio padrão: %.5f\n", desvio);

        return 0;
}
