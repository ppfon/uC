/* |4.2|
 * 1. Numa faculdade, os alunos com média maior ou igual a 7,0 são aprovados,
 * aqueles com média inferior a 3,0 são reprovados e os demais podem fazer
 * recuperação. Dadas as duas notas de um aluno, mostre a situação dele.
 */

#include <stdio.h>

int 
main(void) {
        
        float media, n1, n2; 

        puts("Entre com as duas notas do aluno separadas por um espaço vazio:");
        scanf("%f %f", &n1, &n2);

        media = (n1+n2)/2;

        if (media >= 7.0) {
                puts("Aprovado.");
        } else if (media <= 3.0) {
                puts("Reprovado.");
        } else {
                puts("Passível de recuperação.");
        }

        return 0;

}
