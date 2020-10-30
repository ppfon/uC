/* |4.2|
 * 2. Uma empresa concedeu reajuste salarial de 5% a todos os seus 
 * funcionários. Além disto, concedeu também um abono de R$ 100,00 
 * para os que recebem até R$ 750,00. Dado o valor do salário de um
 * funcionário, calcule e mostre o salário reajustado.
 */ 

#include <stdio.h>

int 
main(void) {
        
        float salario, reajuste;

        puts("Entre com o salário do funcionário:");
        scanf("%f", &salario);

        if (salario <= 750.00)
                reajuste = salario * 1.05 + 100.00;
        else
                reajuste = salario * 1.05;
        
        printf("Salário reajustado: %.2f\n", reajuste);

        return 0;
}
