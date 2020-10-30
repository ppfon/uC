/* |5.4| 
 * Modifique as funções definidas no exercício anterior para implementar o 
 * rastreamento automático.
 */

#include <stdio.h>

int 
fatorial(int n)
{

        printf("fatorial: %d*(%d-1)!\n", n, n);

        return (n < 2) ? n : n*fatorial(n-1);
}


int
resto(int dividendo, int divisor)
{
        printf("resto: (%d - %d) %% %d\n", dividendo, divisor, divisor);

        if (dividendo >= divisor) 
                return resto(dividendo-divisor, divisor);
        else
                return dividendo;
}

int
divisão(int dividendo, int divisor, int quociente)
{
        
        if (dividendo >= divisor) {
                printf("divisão: (%d - %d) / %d\n", dividendo, divisor, divisor);
                return divisão(dividendo-divisor, divisor, quociente+1);
        }
        else
                return quociente;
}

int
multiplicação(int multiplicando, int multiplicador, int produto)
{

        if (multiplicador) {
                printf("multiplicação: (%d+%d)*%d\n", \
                                produto, multiplicando, multiplicador);

                return multiplicação(multiplicando, multiplicador-1, produto+multiplicando);
        }
        else 
                return produto;
}

int 
main(void)
{
        int a, b;

        a = 5;
        b = 3;

        printf("Seja a = %d e b = %d, tem-se:\n", a, b);
        printf("a! = %d\na %% b = %d\na / b = %d\na * b = %d\n", \
                        fatorial(a), resto(a,b), divisão(a,b,0), multiplicação(a,b,0));

        return 0;
}
