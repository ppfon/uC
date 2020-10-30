/* |5.3|
 * Exercício: Qual seria a saída gerada pelo programa anterior se a sub-rotina
 * defValores() fosse a seguinte:
 *
 * void defValores(void) {
 * int a, b;
 * a = 100;
 * b = 200; 
 * }
 *
 * R: Se essa fosse a única alteração feita, a saída seria: 
 *
 * a = 0, b = 0
 * x = 10, y = 20
 *
 * As variáveis a e b tem este valor porque variáveis estáticas (static) e
 * externas (extern) os tem por padrão quando não iniciadas manualmente, já 
 * que a alteração do código modifica apenas as variáveis locais automáticas
 * da sub-rotina. 
 */
