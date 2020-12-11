/* |7.3| 
 * Defina um tipo de estrutura nomeada para representar pontos no plano através
 * de suas coordenadas cartesianas. Em seguida, crie uma função para calcular a 
 * distância entre dois pontos e codifiqueum programa para testar seu funcionamento.
 */

#include <stdio.h>
#include <math.h>

typedef struct {
        float x, y;
} coordenada;

float distancia(float x1, float y1, float x2, float y2) {
        return sqrtf(powf(x1-x2,2) + powf(y1-y2,2));
}

int main(void) {
        coordenada p1, p2;

        puts("Entre com a coordenada do primeiro ponto no formato x,y:");
        scanf("%f,%f", &p1.x, &p1.y);

        puts("Entre com a coordenada do segundo ponto no formato x,y:");
        scanf("%f,%f", &p2.x, &p2.y);

        printf("Distância entre os pontos: %.3f\n", distancia(p1.x, p1.y, p2.x, p2.y));

        return 0;
}
