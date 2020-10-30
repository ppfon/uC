/* |4.2|
 * 2. Dados os coeficientes (a≠0, b e c) de uma equação do 2o grau, calcule
 * e mostre as raízes, usando afórmula de Báskara.
 */

#include <stdio.h>
#include <math.h>

int 
main(void) {
        
        float a, b, c, delta, x1, x2;
        
        puts("Entre com os valores de a, b e c separados por espaço vazio:");
        scanf("%f %f %f", &a, &b, &c);

        delta = pow(b,2) - 4*a*c;

        if (delta < 0) {
                puts("Não possui raízes reais.");
                return 1;
        }

        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);

        printf("Raízes: %.3lf e %.3lf\n", x1, x2);

        return 0;

}
