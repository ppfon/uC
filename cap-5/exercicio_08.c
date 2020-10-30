/* |5.2|
 * 7. Codifique a função cpf(n,d) que devolve verdade se o CPF n tem dígito 
 * verificador d. Use o método descrito no exercício anterior para calcular o
 * dígito verificador do CPF do seguinte modo: 
 * Suponha CPF =345702159. 
 * Calcule o primeiro dígito:  a = dv(345702159) → a = 7. 
 * Calcule o segundo dígito: b = dv(3457021597) → b = 1. 
 * Número completo do CPF: 345702159−71
 */

#include <stdio.h>

int
cpf(int long n, int d)
{
        int d1, d2;

        d1 = dv(n);
        d2 = dv(n*10+d1);

        return ((d1*10+d2) == d) ? 1 : 0; 
}
