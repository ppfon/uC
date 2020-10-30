/* |4.2| 
 * 1. Seja ‘erro’ uma variável contendo o número de erros detectados num
 * certo processo. Codifique uma chamada à função printf( ) capaz de
 * exibir saídas com mensagens adaptáveis para singular e plural. Exemplo:
 *      1 erro detectado.
 *      5 erros detectados.
 */

        (erro > 2) ? printf("%d erro detectado.\n", erro) \
                : printf("%d erros detectados.\n", erro);
