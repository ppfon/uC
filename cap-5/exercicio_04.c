/* |5.2|
 * 3. Codifique uma função quad(n), que devolve o quadrado de n usando o 
 * método da soma de ímpares.
 */

int
quad(int n)
{
        int i, soma, impar;
        soma =  impar = 1;

        for (i = 2; i <= n; i++)
                soma += impar += 2;

        return soma;
}
