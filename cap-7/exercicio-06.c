/* |7.6| 
 * Usando o tipo definido no exercício 7.3, para armazenamento de pontos do plano 
 * cartesiano, defina um tipo de estrutura para representar segmentos de retas 
 * através dos seus extremos. Crie uma função para determinar o comprimento 
 * de um tal segmento e faça um programa para testá-la.
 */

#include <stdio.h>
#include <math.h>

typedef struct {
        float x, y;
} coordenada;

typedef struct {
        coordenada p1, p2;
} segmento;

float distancia(float x1, float y1, float x2, float y2) {
        return sqrtf(powf(x1-x2,2) + powf(y1-y2,2));
}

int main(void) {
        segmento r1; 
        
        puts("Entre com as coordenadas dos extremos neste formato: x1,y1;x2,y2");
        scanf("%f,%f;%f,%f", &r1.p1.x, &r1.p1.y, &r1.p2.x, &r1.p2.y);

        printf("Comprimento do segmento: %.3f\n", distancia(r1.p1.x, r1.p1.y, r1.p2.x, r1.p2.y));

        return 0;
}
