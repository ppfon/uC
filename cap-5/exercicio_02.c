/* |5.1|
 * 1. Codifique uma função fat(n) que devolve o fatorial de n
 */

int 
fatorial(int n)
{
        return (n < 2) ? n : (n*fatorial(n-1));
}
