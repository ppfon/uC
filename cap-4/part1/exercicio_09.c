/* |4.2|
 * 1. Dados a altura e o sexo de uma pessoa, determine o peso ideal de acordo 
 * com o estipulado a seguir:
 *      - HOMENS - peso ideal = 72.7 altura − 58
 *      - MULHERES - peso ideal = 62.1 altura − 44.7
 */

#include <stdio.h>

int 
main(void) {

        float altura; 
        int sexo;

        puts("Entre com o sexo (0 = masculino, 1 = feminino) e altura (m) da pessoa separados por um espaço:");
        scanf("%d %f", &sexo, &altura);

        switch (sexo) {
                case 1: 
                        printf("Peso ideal: %.1f\n", (62.1 * altura - 44.7)); 
                        break;
                case 0:
                        printf("Peso ideal: %.1f\n", (72.7 * altura - 58));
                        break;
                default:
                        puts("Erro: sexo não especificado.");
                        return 1;
        }

        return 0;

}
