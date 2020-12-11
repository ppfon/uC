/* |7.7| 
 * Usando o tipo pessoa, definido no exemplo 7.F, crie uma função para preencher
 * uma agenda com os dados de 5 pessoas. Crie também uma função para procurar na
 * agenda o telefone de uma determinada pessoa e codifique um programa para 
 * testar essas funções. 
 */

#include <stdio.h>
#include <string.h>

typedef struct {
        int dia, mes, ano;
} data;

typedef struct {
        char nome[31];
        char fone[21];
        data nasc;
} pessoa;

pessoa contato[5];

void adc_pessoa(int i) {
        printf("Entre com o nome do contato %d:\n", i);
        fgets(contato[i].nome, sizeof(contato[i].nome), stdin);

        printf("Entre com o fone do contato %d:\n", i);
        fgets(contato[i].fone, sizeof(contato[i].fone), stdin);

        printf("Entre com a data de nascimento do contato %d (DD/MM/AAAA):\n", i);
        scanf("%d/%d/%d", &contato[i].nasc.dia, &contato[i].nasc.mes, &contato[i].nasc.ano);
}

void procura_tel(char name[]) {
        int i;
        for(i = 0; i < 1; i++) {
                if (!(strcmp(name, contato[i].nome)))
                        printf("%d", contato[i].fone);
        }
}

int main(void) {
        int i; 
        char name[31];

        for(i = 0; i < 1; i++)  {
                adc_pessoa(i);
        }

        //printf("%s %s %d %d %d\n", contato[0].nome, contato[0].fone, \
        //                contato[0].nasc.dia, contato[0].nasc.mes, contato[0].nasc.ano);

        puts("Entre com o nome desejado:");
        fgets(name, sizeof(name), stdin);

        //procura_tel(name);

        return 0;
}
