/* 7.1 Codifique um programa para criar uma variável de tipo anônimo, capaz de
 * armazenar o título, o autor, a editora e o ano de publicação de um livro; 
 * atribuir valores aos seus campos eexibi-la na tela. */

#include <stdio.h>
#include <string.h>

struct {
        char titulo[101];
        char autor[51];
        char editora[26];
        int ano_pub;
} livro;


void adc_livro(void) {
        /* assumindo que fgets será bem sucedida... */
        puts("Entre com o título (até 200 carac.):");
        fgets(livro.titulo, sizeof(livro.titulo), stdin);

        puts("Entre com o autor (até 50 carac.):");
        fgets(livro.autor, sizeof(livro.autor), stdin);

        puts("Entre com a editora (até 25 carac.):");
        fgets(livro.editora, sizeof(livro.autor), stdin);

        puts("Entre com o ano de publicação:");
        scanf("%d", &livro.ano_pub);
}

int main(void) {
        adc_livro();
        printf("Livro: %sAutor: %sEditora: %sAno de publicação: %d\n",\ 
                        livro.titulo, livro.autor, \
                        livro.editora, livro.ano_pub);

        return 0;
}
