/* |7.8| 
 * Usando o tipo de estrutura definido no exercício 7.2, crie e inicialize uma 
 * tabela com os dados de todos os voos (máx. 100) de um aeroporto e codifique 
 * uma rotina para exibi-la em vídeo.
 */

#include <stdio.h>
#define MAX_VOOS 100

typedef struct {
        int hr, min, seg;
} horario;

typedef struct {
        char origem[26];
        char destino[26];
        horario partida, chegada;
} voo;

void imprime(struct registro[], int i) {
        printf("Origem: %s", registro[i].origem);
        printf("Destino: %s", registro[i].destino);
        printf("Partida: %d:%d:%d\n", registro[i].partida.hr, registro[i].partida.min, registro[i].partida.seg);
        printf("Chegada: %d:%d:%d\n", registro[i].chegada.hr, registro[i].chegada.min, registro[i].chegada.seg);
}

int main(void) { 
        int i;
        voo registro[MAX_VOOS] = {
                { "Goiânia", "Brasília", 10, 30, 30, 12, 01, 10 },
                { "São Paulo", "Rondônia", 03, 45, 32, 07, 12, 49 },
                { "Salvador", "Porto Alegre", 19, 20, 29, 04, 20, 41 }
        };

        for(i = 0; i < 3; i++) {
                void imprime(registro[], i);
        }
        return 0;
}
