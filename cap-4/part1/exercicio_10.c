/* |4.2|
 * 2. O perfil de uma pessoa pode ser determinado a partir da sua data de 
 * nascimento, conforme exemplificado a seguir. Dada uma data de nascimento,
 * informe o perfil correspondente.
 * Exemplo: 
 * 13/06/1970: 
 * 1306 + 1970 = 3276
 * 32 + 76 = 108
 * 108 % 5 = 3
 */

#include <stdio.h>

int 
perfil(int dia, int mes, int ano)
{
        int p1 = ((dia*100 + mes) + ano);

        return ((p1/100) + (p1 % 100)) % 5 ;
}

int
main(void)
{
        int dia, mes, ano;

        puts("Entre com a data de nascimento no formato DD/MM/AAAA:");
        scanf("%d/%d/%d", &dia, &mes, &ano);
        
        switch (perfil(dia, mes, ano)) {
                case 0:
                        puts("Tímido.");
                        break;
                case 1:
                        puts("Sonhador.");
                        break;
                case 2:
                        puts("Paquerador.");
                        break;
                case 3:
                        puts("Atraente.");
                        break;
                case 4:
                        puts("Irresistível.");
                        break;
}
        return 0;

}
