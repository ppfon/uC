/* |7.9| 
 * Usando o algoritmo de ordenação por seleção, codifique uma função para 
 * ordenar uma tabela cujos registros contêm nomes de pessoas e seus 
 * respectivos números de telefones. Use o nome como chave de ordenação.
 */

#include <stdio.h>
#include <string.h>

typedef struct {
        char nome[51];
        char numero[31];
} pessoa; 

struct pessoa amigos[] { 
        { "Francisco", "32912656" },
        { "Ana", "32912650" },
        { "Zeumar", "32763421" }
};

void ordena(void) {

