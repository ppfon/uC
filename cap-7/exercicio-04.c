/* |7.4| 
 * Defina um tipo de estrutura para armazenar um horário composto de horas, 
 * minutos e segundos. Crie e inicialize uma variável desse tipo e, em seguida,
 * mostre seu valor no vídeo usando o formato "99:99:99".
 */

#include <stdio.h>
#include <time.h>

struct {
        int hrs, min, seg;
} horario; 

int main(void) {
        horario.hrs = 22;
        horario.min = 40;
        horario.seg = 12;

        printf("%d:%d:%d\n", horario.hrs, horario.min, horario.seg);

        return 0;
}
