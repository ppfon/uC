/* |4.3|
 * 3. Faça um programa que calcule o saldo de uma conta bancária tendo como 
 * entrada o saldo inicial e uma série de operações de crédito e/ou débito 
 * finalizada com o valor zero. O programa deve apresentar como saída o total 
 * de créditos, o total de débitos, o imposto sobre movimentação financeira 
 * pago (0,35% do total de débitos) e o saldo final.
 */

#include <stdio.h>
#define FLAG 0.0
#define IMPOSTO 0.35

int
main(void)
{
        float saldo_inicial, saldo_final, valor, imposto, \
                total_credito, total_debito;

        saldo_final = total_credito = total_debito = 0;

        puts("Entre com o saldo inicial da conta:");
        scanf("%f", &saldo_inicial);

        for (;;) {
                puts("Entre com o valor (negativo -> débito, positivo -> crédito) ou 0 p/ finalizar:");
                scanf("%f", &valor);

                if (valor == FLAG) 
                        break;

                if (valor < 0.0)
                        total_debito += (-valor);
                else 
                        total_credito += valor;
        }

        imposto = total_debito * IMPOSTO;
        saldo_final = saldo_inicial + total_credito - total_debito - imposto;

        printf("Saldo final: %.3f\nImposto: %.3f\n", saldo_final, imposto);
        printf("Total de créditos: %.3f\nTotal de débitos: %.3f\n", \
                        total_credito, total_debito);

       return 0;
}
