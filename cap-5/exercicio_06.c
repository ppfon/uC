/* |5.2|
 * 5. São dadas as coordenadas (xc,yc) do centro de uma circunferência e a 
 * medida r de seu raio. Também são dadas as coordenadas (x,y) de uma série
 * de pontos, sendo que o último deles é igual ao centro. Determine quantos
 * pontos desta série estão dentro da circunferência, quantos estão fora e 
 * quantos estão sobre ela. Crie a função dist(x1,y1,x2,y2) que dá adistância
 * entre os pontos (x1,y1) e (x2,y2) e, depois, utilize-a num programa que 
 * resolva o problema proposto.
 */

#include <stdio.h>
#include <math.h>

float
dist(float x1, float y1, float x2, float y2)
{
        return fabs(sqrtf(powf((x1-x2),2) + powf((y1-y2),2)));
}

int
main(void)
{
        float xc, yc, xp, yp, raio, distancia;
        int i, externo, interno, pertencente;

        externo = interno = pertencente = 0;

        puts("Entre com as coordenadas do centro no formato xc,yc:");
        scanf("%f,%f", &xc, &yc);

        puts("Entre com o raio da circunferência:");
        scanf("%f", &raio);

        for (i = 1; ; i++) {
                printf("Entre com o ponto %d no formato x,y:\n", i);
                scanf("%f,%f", &xp, &yp);

                if (!(xp || yp))
                        break;

                distancia = dist(xp, yp, xc, yc);

                if (distancia > raio)
                        externo++;
                else {
                        if (distancia < raio)
                                interno++;
                        else 
                                pertencente++;
                }
        }

        puts("Qtd. de ponto(s) externos, internos e pertencentes à circunferência, respectivamente:");
        printf("%d, %d, %d\n", externo, interno, pertencente);

        return 0;
}
