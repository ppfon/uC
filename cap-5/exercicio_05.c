/* |5.2|
 * 4. Codifique uma função que receba um número real n e devolva sua raiz 
 * quadrada r usando o método proposto por Newton (pesquise):
 * 1.  Chuta-se um valor inicial para a raiz, por exemplo, 1;
 * 2. Caso |r^2−n| < 0.001, então r é a resposta aproximada para a raiz 
 * quadrada (fim);
 * 3. Caso contrário, aproxima-se r = (r^2+n)/(2r) e volta-se ao 2º passo.
 */

#include <math.h>

float
raiz_newton(float n)
{
        float r; 

        for (r = n; fabs(r*r - n) > 0.001; r = (r*r + n)/(2*r))
                ;

        return r;
}
