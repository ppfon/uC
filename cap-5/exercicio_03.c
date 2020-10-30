/* |5.2|
 * 2. Codifique uma função pot(x,n) que devolve x elevado a n.
 */

int
pot(int x, int n)
{
        int i, produto = 1;

        for (i = 1; i <= n; i++)
                produto *= x;

        return produto;
}
