/*7.2 Defina um tipo de estrutura rotulada para representar números complexos 
 * da forma a+j.b, sendo a a parte real e b a parte imaginária. Em seguida, 
 * crie uma função para calcular a soma de dois números complexos e codifique 
 * um programa para testar seu funcionamento. Use atribuição para inicializar 
 * os campos membros das variáveis
 */

#include <stdio.h>

struct equacao {
        float a, b;
} complexo;

struct equacao resultado;

void soma(float a1, float b1, float a2, float b2) {
        resultado.a = a1 + a2;
        resultado.b = b1 + b2;
}

int main(void) {
        struct equacao eq1, eq2;

        puts("Entre com o primeiro número complexo no formato a+j.b:");
        scanf("%f+j.%f", &eq1.a, &eq1.b);

        puts("Entre com o segundo número complexo no formato a+j.b:");
        scanf("%f+j.%f", &eq2.a, &eq2.b);

        soma(eq1.a, eq1.b, eq2.a, eq2.b);
        printf("%.3f+j.%.3f\n", resultado.a, resultado.b);

        return 0;
}
