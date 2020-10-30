/* |5.2|
 * 6. Codifique a função dv(n) que recebe um número n e devolve o seu dígito
 * verificador. Essa função deve implementar o seguinte método:
 * Suponha n = 345702159.
 * Calcule a soma: s = 3*10 + 4*9 + 5*8 + 7*7 + 0*6 + 2*5 + 1*4 + 5*3 + 9*2 = 202
 * Calcule: dv = 11 − s%11 = 11 − 201%11 = 11 − 4 = 7
 * O dígito verificador é 0 se dv > 9 e é o próprio dv, caso contrário. Nesse caso:  dv = 7
 */

int
dv(int long n)
{
        int i, digito, s = 0;

        for (i = 2; i <= 10; i++) {
                s += (n%10)*i;
                n /= 10;
        }
        
        digito = 11 - s % 11;
        
        return (digito > 9) ? 0 : digito;
}
