/* |5.1|
 * 1. Codifique uma função fat(n) que devolve o fatorial de n
 */

int 
fat(int n)
{
        return (n < 2) ? n : (n*fat(n-1));
}
