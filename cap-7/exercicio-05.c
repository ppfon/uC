/* |7.5| 
 * Defina um tipo de estrutura para armazenar os dados de um vôo como, por 
 * exemplo, os nomes das cidades de origem e destino, datas e horários de 
 * partida e chegada. Crie uma variável desse tipo e atribua valores aos seus 
 * membros usando a notação de ponto e, depois, inicialização.
 */

#include <stdio.h>

typedef struct {
        int hr, min, seg;
} horario;

struct {
        char origem[26];
        char destino[26];
        horario partida, chegada;
} voo;

int main(void) { 
        puts("Entre com a cidade de origem:");
        fgets(voo.origem, sizeof(voo.origem), stdin);

        puts("Entre com a cidade de destino:");
        fgets(voo.destino, sizeof(voo.destino), stdin);

        puts("Entre com o horário de chegada no formato HH:MM:SS:");
        scanf("%d:%d:%d", &voo.chegada.hr, &voo.chegada.min, &voo.chegada.seg);

        puts("Entre com o horário de partida no formato HH:MM:SS:");
        scanf("%d:%d:%d", &voo.partida.hr, &voo.partida.min, &voo.partida.seg);

        printf("Origem: %sDestino: %sChegada: %d:%d:%d\nPartida: %d:%d:%d\n", \
                        voo.origem, voo.destino, \ 
                        voo.chegada.hr, voo.chegada.min, voo.chegada.seg, \
                        voo.partida.hr, voo.partida.min, voo.partida.seg);

        return 0;
}
