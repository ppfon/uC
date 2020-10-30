/* |4.3|
 * 2. A série de Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21,
 * 34, 55, ... Os dois primeiros termos são iguais a 1 e, a partir do terceiro,
 * o termo é dado pela soma dos dois termos anteriores. Dado um número n ≥ 3, 
 * exiba a série de Fibonacci até o n-ésimo termo (inclusive).
 */

#include <stdio.h>

int
fibonacci(int i) 
{
        return (i < 2) ? i : fibonacci(i-1) + fibonacci(i-2);
}

int
main(void)
{
        int n, i;

        puts("Entre com a quantidade de termos desejada:");
        scanf("%d", &n);

        for (i = 1; i <= n; i++) {
                if (i == n)
                        printf("%d\n", fibonacci(i));
                else 
                        printf("%d, ", fibonacci(i));
        }

        return 0;
}
